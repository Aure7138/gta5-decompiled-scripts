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
	var uLocal_18 = 0;
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_33[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_47 = 0;
	char* sLocal_48[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char cLocal_145[16] = "";
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_59 = 1;
	bLocal_62 = true;
	bLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	unk_0x0A2FDF6E490B25B3();
	if (unk_0xB859EDA9E476E45A() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_158())
	{
		Global_4268339 = 99;
		Global_4268340 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4268339 = 0;
		Global_4268340 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_157();
	if (func_156(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_155();
	iLocal_112 = unk_0x04B8CCFB93858A27();
	if (Global_19431 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_21838 = 0;
	Global_21839 = 0;
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (unk_0xA700AD7FFC1C5C12(unk_0x0FA8183DAD2B3203()))
		{
			Global_21838 = 1;
		}
		if (unk_0x1DD40361B99C071C())
		{
			Global_21838 = 1;
		}
		if (unk_0xD960230552BC4165(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203()), 0))
		{
			Global_21838 = 1;
		}
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
		{
			Global_21838 = 1;
		}
		if (unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203()))
		{
			Global_21838 = 1;
		}
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_21838 = 1;
			}
			uLocal_149 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if ((((unk_0x7F375072508F738F(uLocal_149) == joaat("rhino") || unk_0x7F375072508F738F(iLocal_149) == joaat("cutter")) || unk_0x7F375072508F738F(iLocal_149) == joaat("submersible")) || unk_0x7F375072508F738F(iLocal_149) == joaat("khanjali")) || (unk_0x7F375072508F738F(iLocal_149) == joaat("barrage") && unk_0x2068C310844A89D8(iLocal_149, func_154(unk_0x0FA8183DAD2B3203(), 1))))
			{
				Global_21838 = 1;
			}
			else if (unk_0x300C62F79A4441EB(iLocal_149, -1, 0) == unk_0x0FA8183DAD2B3203())
			{
				if (unk_0x7BB084963FF20373(iLocal_149) > 0f)
				{
					if (!Global_76577)
					{
						if (!func_153())
						{
							unk_0x5671B0B60CC07A13(unk_0x0FA8183DAD2B3203(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_76577)
	{
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			unk_0x69680E067F37891A(unk_0x7C7787D2D7139A85(), 0);
		}
	}
	unk_0x3B76114EC84D5812(&Global_7356, 21);
	func_152(0);
	unk_0xA1E7A40E1F56E511(&Global_7356, 17);
	if (Global_19428 == 0)
	{
		func_151();
	}
	else
	{
		uLocal_140 = unk_0x1FAFE9BB9D8960C1("camera_gallery");
		uLocal_141 = unk_0x1FAFE9BB9D8960C1("instructional_buttons");
		while (!unk_0x08EA887200715AD9(uLocal_140) || !unk_0x08EA887200715AD9(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA42289DB8250C2C0();
			unk_0x572062A62138FBA2(0, 25, 1);
		}
		if (Global_76577)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_150())
			{
				case 0:
					iLocal_144 = 2;
					break;
				
				case 2:
					iLocal_144 = 2;
					break;
				
				case 3:
					iLocal_144 = 2;
					break;
				}
		}
		func_149(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_148(uLocal_140, "CLOSE_SHUTTER");
		unk_0xF1BC72CEC2746995(Global_19467, "DISPLAY_VIEW");
		unk_0xD02F24F3E2DB263A(16);
		unk_0xAC7C2DE2DDC7AF03();
	}
	Local_78 = { Global_19446 };
	Local_81 = { Global_19439[Global_19431 /*3*/] };
	Global_21839 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0x3B76114EC84D5812(&Global_7358, 3);
	}
	func_146();
	unk_0xF314976CA3E17AC7(4);
	if (unk_0x954A22460A564399())
	{
	}
	if (Global_4456448.f_185407)
	{
	}
	if (Global_4456448.f_185409 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x1F4FA01F906F33E5(0, Global_19455);
		unk_0x1F4FA01F906F33E5(0, 186);
		unk_0xA42289DB8250C2C0();
		unk_0x572062A62138FBA2(0, 25, 1);
		unk_0x572062A62138FBA2(0, 0, 1);
		if (func_145())
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
			{
				unk_0xA1E7A40E1F56E511(&Global_4269615, 2);
				func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_111560.f_14046.f_81)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 13))
			{
				if (!unk_0x0945988C02AF3025())
				{
					if (!unk_0xA2BC31158C8CEFD2(Global_7357, 28))
					{
						if ((iLocal_128 && iLocal_131 == 0) && !func_145())
						{
							unk_0xA1E7A40E1F56E511(&Global_4269615, 13);
							Global_111560.f_14046.f_81 = 1;
							func_144("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xCD97B9861557C025())
		{
			if (Global_4456448.f_185406 == 0 && Global_4456448.f_185407 == 0)
			{
				unk_0x54A18B54F134D59D(15, 0f, -0.0375f);
			}
			unk_0x0AF55029F939BA65(7);
			func_143();
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 200, 1);
			}
			unk_0x572062A62138FBA2(0, 44, 1);
			unk_0x572062A62138FBA2(0, 47, 1);
			unk_0x572062A62138FBA2(0, 91, 1);
			unk_0x572062A62138FBA2(0, 92, 1);
			unk_0x572062A62138FBA2(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0x1F4FA01F906F33E5(0, Global_19459);
			}
			unk_0x1F4FA01F906F33E5(0, Global_19456);
			if ((unk_0x260395BA7F0C83CB() || unk_0xA710300CD13D2877()) && !func_145())
			{
				iLocal_130 = 1;
				Global_19486.f_1 = 3;
				unk_0x269298D09D57BFCF(0);
			}
			if (unk_0xC143C4B6E176B56A())
			{
				Global_19486.f_1 = 3;
				unk_0x269298D09D57BFCF(0);
			}
			if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
			{
				Global_19486.f_1 = 3;
				unk_0x269298D09D57BFCF(0);
			}
			if (unk_0x393E9918BC37548A())
			{
				if (func_132())
				{
					Global_19486.f_1 = 3;
					unk_0x269298D09D57BFCF(0);
				}
			}
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xA4E0D905CE4E7657(unk_0x0FA8183DAD2B3203(), 0))
				{
					Global_19486.f_1 = 3;
					unk_0x269298D09D57BFCF(0);
				}
				if ((unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x32656A651394EBE9(unk_0x7C7787D2D7139A85()))
				{
					if (func_131())
					{
					}
					else
					{
						Global_19486.f_1 = 3;
						unk_0x269298D09D57BFCF(0);
					}
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()) || unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					if (Global_76577 == 1)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x19DEEB0989DD9C04(unk_0x0FA8183DAD2B3203()) > 0.3f)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					func_130();
					iLocal_149 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
					if (unk_0x7BB084963FF20373(iLocal_149) < 0f)
					{
						func_127(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0x85738A2497D9782C())
							{
								func_127(0);
							}
						}
						else if (!unk_0x85738A2497D9782C())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0xA42289DB8250C2C0();
						}
					}
				}
				else if (Global_76577 == 0)
				{
					if (unk_0xA2BC31158C8CEFD2(Global_7356, 18))
					{
						func_126();
						if ((Global_19486 == 0 || Global_19486 == 1) || Global_19486 == 2)
						{
							if (!unk_0x442ECC4538ED28D1(unk_0x0FA8183DAD2B3203()))
							{
								if (unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
								{
								}
								else
								{
									Global_19486.f_1 = 3;
									unk_0x269298D09D57BFCF(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_125();
			}
			if (Global_19486.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_19486.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_123();
									if (Global_21843 == 0 && Global_21840 == 6)
									{
										unk_0xE845A888B98DD9F6(0, 1);
										unk_0xA8E0AD0360E6D52A();
										iLocal_150 = 0;
										func_122();
										if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
										{
											Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
										}
										func_121();
										iLocal_109++;
										if (func_158())
										{
											func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_115();
									}
									if (Global_21840 == 0)
									{
										iLocal_150 = 0;
										unk_0xA8E0AD0360E6D52A();
										if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
										{
											Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
										}
										func_114();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_115();
										if (func_158())
										{
											if (Global_4268340 == 0)
											{
												if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
												{
													func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
										{
											func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_113();
										func_112(1);
									}
								}
								else if (Global_19486.f_1 != 9)
								{
									if (Global_21839 == 1)
									{
										if (Global_21838 == 0)
										{
											func_111();
										}
									}
									else if ((Global_7964 - Global_7963) > Global_7965)
									{
										if (unk_0x260395BA7F0C83CB() && func_110())
										{
											if (func_109() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x269298D09D57BFCF(0);
												unk_0xCFF6AB47B7B014FF(iLocal_112);
												iLocal_143 = 0;
												if (Global_21838 == 0)
												{
													func_121();
													Global_21838 = 1;
													unk_0xE845A888B98DD9F6(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_108(0, 0);
													func_112(0);
													iLocal_115 = 0;
													func_103(1);
													iLocal_142 = 0;
													func_101(0, 1);
													func_149(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_99(1);
												}
											}
										}
										if (func_98(2, Global_19454, 0))
										{
											if (func_145())
											{
												if (((Global_1662552 || Global_1312791) || Global_21841) || unk_0xA2BC31158C8CEFD2(Global_7356, 21))
												{
												}
												else if (func_109() && iLocal_127)
												{
												}
												else if (!func_110())
												{
													if (iLocal_127 == 0)
													{
														unk_0x5800A2599806C837(500);
														iLocal_143 = 0;
														func_101(1, 1);
														func_97(1);
													}
												}
											}
											else if (func_109() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x269298D09D57BFCF(0);
												unk_0xCFF6AB47B7B014FF(iLocal_112);
												iLocal_143 = 0;
												if (Global_21838 == 0)
												{
													func_121();
													Global_21838 = 1;
													unk_0xE845A888B98DD9F6(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_108(0, 0);
													func_112(0);
													iLocal_115 = 0;
													func_103(1);
													iLocal_142 = 0;
													func_101(0, 1);
													func_149(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x0945988C02AF3025())
										{
											func_96();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x0945988C02AF3025())
									{
										func_96();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
										{
											func_96();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0xA2BC31158C8CEFD2(Global_7356, 28))
									{
										func_96();
										iLocal_102 = 0;
									}
									if (Global_21838 == 1)
									{
										func_88();
									}
									else if (Global_19486.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_84();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_114();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
												{
													if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
													{
														func_148(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x9B35D07DCD0F0B43();
														while (unk_0x9B35D07DCD0F0B43() < (iLocal_135 + iLocal_137) && Global_19486.f_1 > 3)
														{
															func_143();
															func_125();
															func_83();
															unk_0xA42289DB8250C2C0();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_158())
												{
													if (Global_4268340 == 0)
													{
														if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
														{
															func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
												{
													func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_125();
												func_143();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_115();
												iLocal_136 = 0;
												func_148(uLocal_140, "OPEN_SHUTTER");
											}
											func_113();
											func_112(1);
											func_82();
										}
									}
									if (iLocal_143 == 1)
									{
										func_79();
									}
									if (iLocal_129)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0xA1E7A40E1F56E511(&Global_7356, 18);
											if (Global_21838 == 0)
											{
												func_101(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_21838 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_21841 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_83();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_19486.f_1 > 3)
					{
						if (Global_21839 == 1)
						{
							if (Global_21838 == 0)
							{
								func_111();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 7)
				{
					if (unk_0xDB02E0A2E60C82EB() || unk_0x77BA37DB22C66465())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0xDC143D98E1977B20() || unk_0x39FDED461BF385C3())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0xE434AB6E3DE89861())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_155 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = unk_0x3ADD010115ADF1A4();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (unk_0x26BB91778477F482(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_101(0, 1);
					}
					if (unk_0x26BB91778477F482(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x1EB14C6F68B8F915(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_101(0, 1);
							iLocal_154 = 0;
							unk_0x54F53F1BBB9A0425("Gallery");
							unk_0xAE1056BFAF00EE4B();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0x39FDED461BF385C3())
					{
						if (unk_0x26BB91778477F482(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_101(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x26BB91778477F482(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_101(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0x39FDED461BF385C3())
					{
						if (unk_0x26BB91778477F482(2, Global_19458))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_101(0, 1);
							if (unk_0xA2BC31158C8CEFD2(Global_7357, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x9B35D07DCD0F0B43();
							unk_0xAED88DFEB5BF99CF(1);
						}
					}
				}
				else if (unk_0x26BB91778477F482(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_101(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x9B35D07DCD0F0B43();
		if (func_145())
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
			{
				unk_0xA1E7A40E1F56E511(&Global_4269615, 2);
				func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_108(0, 0);
			func_112(0);
			iLocal_115 = 0;
			func_103(1);
			Global_21838 = 0;
			Global_21839 = 0;
			Global_21841 = 0;
			unk_0x749CA887CB0AFEC9(&uLocal_140);
			unk_0x749CA887CB0AFEC9(&uLocal_141);
			unk_0x269298D09D57BFCF(0);
			if (Global_19666 == 1)
			{
				unk_0xA1E7A40E1F56E511(&Global_7356, 17);
			}
			else
			{
				unk_0x3B76114EC84D5812(&Global_7356, 17);
			}
			unk_0xE845A888B98DD9F6(0, 1);
			unk_0x69680E067F37891A(unk_0x7C7787D2D7139A85(), 1);
			unk_0x3B76114EC84D5812(&Global_7358, 3);
			unk_0x3B76114EC84D5812(&Global_4269615, 3);
			unk_0x129AB650651225C5(15);
			Global_21842 = 1;
			unk_0xCFF6AB47B7B014FF(iLocal_112);
			unk_0x0972EA9E8102C153(iLocal_112);
			unk_0xA8E0AD0360E6D52A();
			func_103(1);
			unk_0x4FF323F6E211109B(0);
			unk_0xADF7A23CAC42413F(0);
			unk_0x039FBD08EEC1CA13(1f);
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				unk_0xCB2226D6817DFC2E(unk_0x0FA8183DAD2B3203(), "Mood_Normal_1", 0);
				unk_0x2065A160187E5910(unk_0x0FA8183DAD2B3203());
			}
			if (Global_4268340 > 0 && Global_4268340 < 13)
			{
				unk_0xD73CEE901CAB1716(sLocal_33[Global_4268340]);
			}
			unk_0x3B76114EC84D5812(&Global_7356, 18);
			if (func_145())
			{
				func_101(1, 1);
			}
			else
			{
				func_101(0, 1);
			}
			if (func_156(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0x9C9E32388A7886A2();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x9E879DA31DF39722(1);
		}
		else if (Global_19486.f_1 > 3)
		{
			unk_0x9E879DA31DF39722(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269893 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = unk_0x8CA1231E4F8D7161(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x04F32388213EF6D6();
			iLocal_110 = unk_0xDF9366367375DBFD();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0x08EA887200715AD9(uLocal_140))
					{
						if (func_158())
						{
							if (Global_4268340 == 0)
							{
								if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
								{
									func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
							{
								func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x08EA887200715AD9(uLocal_140))
				{
					func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0xA8E0AD0360E6D52A();
			break;
		
		case 1:
			if (!unk_0x1761C35C6F06D3D2())
			{
				unk_0xDE4C1DB310BFBE72("CELL_SPINNER2");
				unk_0xDB3C29DBB0572E83(1);
			}
			break;
		
		case 2:
			if (unk_0xA2BC31158C8CEFD2(Global_7357, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_19486.f_1 = 3;
				Global_21842 = 1;
			}
			unk_0xA8E0AD0360E6D52A();
			break;
	}
}

void func_5()
{
	if (func_98(2, Global_19455, 0))
	{
		func_1(0);
		if (unk_0xA2BC31158C8CEFD2(Global_7357, 28))
		{
			unk_0x269298D09D57BFCF(0);
			unk_0x5AE11BC36633DE4E(0);
			func_122();
			iLocal_127 = 0;
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			}
			func_121();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7357, 14))
			{
				func_144("CELL_299", -1);
			}
			else
			{
				func_121();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_101(1, 1);
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_7356, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_143();
			unk_0xA42289DB8250C2C0();
			func_83();
			func_130();
			func_125();
		}
		unk_0x269298D09D57BFCF(0);
		func_122();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
		}
		func_115();
		func_121();
	}
	if (func_98(2, Global_19459, 0))
	{
		func_1(0);
		if (func_109() || unk_0xA2BC31158C8CEFD2(Global_7357, 28))
		{
		}
		else
		{
			unk_0x269298D09D57BFCF(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_122();
			iLocal_127 = 0;
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			}
			func_121();
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
	{
		if (func_98(2, Global_19458, 0))
		{
			func_1(0);
			unk_0x269298D09D57BFCF(0);
			unk_0x7062F65EFC052EA0(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA42289DB8250C2C0();
			func_143();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA42289DB8250C2C0();
			func_143();
			unk_0x5C27CA715BA21550();
			unk_0x8D55F3642F7BB7C1();
			Global_21842 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_101(0, 1);
			Global_21838 = 1;
			unk_0xE845A888B98DD9F6(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			}
			func_108(0, 0);
			func_112(0);
			iLocal_115 = 0;
			func_103(1);
			if (!Global_2531497.f_6251)
			{
				unk_0xA1E7A40E1F56E511(&Global_7356, 9);
			}
			iLocal_142 = 0;
			func_149(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Accept", &Global_19475, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x8C1E539A8DCCD9C9(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_21843 = 1;
	unk_0xE845A888B98DD9F6(0, 1);
}

int func_9()
{
	if (iLocal_107 == iLocal_108)
	{
		if (iLocal_105)
		{
			iLocal_105 = 1;
		}
	}
	if (Global_19486.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x59415A8719336539(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_131)
	{
		func_74();
		func_70();
		func_69();
		fLocal_73 = unk_0x9199CADAF773DD06();
		fLocal_74 = unk_0x18433C7A4995B3A1();
		if (iLocal_133 == 0)
		{
			if (unk_0x3772881BFFE6C3F8(2, iVar0) && !unk_0x3772881BFFE6C3F8(2, iVar1))
			{
				iLocal_133 = 1;
				func_149(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_149(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
					func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(2, 179, 1), func_65());
					func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_280");
					func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
					func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_64();
				unk_0xF1BC72CEC2746995(uLocal_141, "SET_MAX_WIDTH");
				unk_0xD435957F6275B434(fLocal_77);
				unk_0xAC7C2DE2DDC7AF03();
				func_149(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x3772881BFFE6C3F8(2, iVar0) || unk_0x3772881BFFE6C3F8(2, iVar1))
		{
			iLocal_133 = 0;
			func_115();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x3772881BFFE6C3F8(2, iVar1) && !unk_0x3772881BFFE6C3F8(2, iVar0))
			{
				iLocal_134 = 1;
				func_149(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_149(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
					func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(2, 179, 1), func_65());
				}
				else if (!func_145())
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_280");
					func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
				}
				else
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_280");
					func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
				}
				func_63();
				unk_0xF1BC72CEC2746995(uLocal_141, "SET_MAX_WIDTH");
				unk_0xD435957F6275B434(fLocal_77);
				unk_0xAC7C2DE2DDC7AF03();
				func_149(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x3772881BFFE6C3F8(2, iVar1) || unk_0x3772881BFFE6C3F8(2, iVar0))
		{
			iLocal_134 = 0;
			func_115();
		}
	}
	else
	{
		unk_0x583A42EE47B55D77(0, 2, 1);
		unk_0x583A42EE47B55D77(0, 1, 1);
	}
	if (unk_0x6BFFC38B3F0D92C2(2))
	{
		func_115();
	}
	func_130();
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 200, 1);
	}
	if (func_145())
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
		{
			unk_0xA1E7A40E1F56E511(&Global_4269615, 2);
			func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0x26BB91778477F482(2, 183) && iLocal_156 == 0) && !func_145())
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
				{
					unk_0x3B76114EC84D5812(&Global_4269615, 2);
					if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
					{
						func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xA1E7A40E1F56E511(&Global_4269615, 2);
					func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0xF1BC72CEC2746995(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x282C78036676E0C2(0);
			func_62("CELL_FOCUS");
			unk_0x282C78036676E0C2(1);
			unk_0xAC7C2DE2DDC7AF03();
		}
		if (!func_61(14))
		{
			if (unk_0xA2BC31158C8CEFD2(Global_4269615, 10))
			{
				if ((Global_76577 == 0 && unk_0x222F76006659B0EB(joaat("pi_menu")) > 0) && func_60())
				{
					unk_0xF1BC72CEC2746995(uLocal_140, "SET_FOCUS_LOCK");
					unk_0x282C78036676E0C2(1);
					unk_0x759AC38FBC6CCA9E("CELL_ACTTL");
					unk_0xA89C789CC9FEF523(unk_0xD54FB72F71EFE6C4(&Global_4270600));
					unk_0x81019766FF500CCA();
					unk_0x282C78036676E0C2(0);
					unk_0xAC7C2DE2DDC7AF03();
					unk_0x3B76114EC84D5812(&Global_4269615, 10);
				}
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Global_4269615, 10))
		{
			unk_0x3B76114EC84D5812(&Global_4269615, 10);
		}
		iLocal_66 = unk_0x9B35D07DCD0F0B43();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				Local_70 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
				if (unk_0xD34AF93E9BCF12F0(Local_70, Local_67, 1) > 5f)
				{
					Global_19486.f_1 = 3;
					unk_0x269298D09D57BFCF(0);
				}
				iLocal_65 = unk_0x9B35D07DCD0F0B43();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x3772881BFFE6C3F8(0, 182) && !func_145())
		{
			unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
			iLocal_132 = 0;
			unk_0xF1BC72CEC2746995(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x282C78036676E0C2(0);
			func_62("CELL_FOCUS");
			unk_0x282C78036676E0C2(1);
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
	else if (unk_0x3772881BFFE6C3F8(0, 182) && !func_145())
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
		iLocal_132 = 1;
		if (!func_61(14))
		{
			unk_0xF1BC72CEC2746995(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x282C78036676E0C2(1);
			func_62("CELL_FOCUS");
			unk_0x282C78036676E0C2(1);
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
	if (func_158())
	{
		if ((unk_0x26BB91778477F482(2, 186) && iLocal_156 == 0) && !func_145())
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
					{
						unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
						unk_0xCB2226D6817DFC2E(unk_0x0FA8183DAD2B3203(), "Mood_Normal_1", 0);
						unk_0x2065A160187E5910(unk_0x0FA8183DAD2B3203());
						if (Global_19486 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xC74E62D8CDF80E57(unk_0x0FA8183DAD2B3203(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xC74E62D8CDF80E57(unk_0x0FA8183DAD2B3203(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											unk_0xCB2226D6817DFC2E(unk_0x0FA8183DAD2B3203(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0xCB2226D6817DFC2E(unk_0x0FA8183DAD2B3203(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0xCB2226D6817DFC2E(unk_0x0FA8183DAD2B3203(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0xCB2226D6817DFC2E(unk_0x0FA8183DAD2B3203(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
					{
						unk_0xCB2226D6817DFC2E(unk_0x0FA8183DAD2B3203(), "Mood_Normal_1", 0);
						unk_0x2065A160187E5910(unk_0x0FA8183DAD2B3203());
						unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
					}
				}
			}
		}
		if ((unk_0x26BB91778477F482(2, 185) && iLocal_156 == 0) && !func_145())
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x2553916E420E8EF0(sLocal_19[Global_4268339], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x4FF323F6E211109B(1);
							unk_0xADF7A23CAC42413F(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0x4FF323F6E211109B(0);
						unk_0xADF7A23CAC42413F(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0x4FF323F6E211109B(1);
					unk_0xADF7A23CAC42413F(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0x4FF323F6E211109B(0);
					unk_0xADF7A23CAC42413F(0);
				}
			}
		}
	}
	if (iLocal_59 == 1 && !func_145())
	{
		if (unk_0x26BB91778477F482(0, 172) && iLocal_156 == 0)
		{
			if (func_158())
			{
				Global_4268340++;
				unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
			}
			if (Global_4268340 == 13)
			{
				func_112(0);
				unk_0x039FBD08EEC1CA13(1f);
				unk_0xD73CEE901CAB1716(sLocal_33[(Global_4268340 - 1)]);
				Global_4268340 = 0;
				func_59();
				if (iLocal_47 == 1)
				{
					unk_0x3B76114EC84D5812(&Global_4269615, 2);
					iLocal_47 = 0;
					func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4268340 > 0 && Global_4268340 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0x4F7B74CE562E3EC6(sLocal_33[Global_4268340], 0);
			}
		}
	}
	if (Global_4268340 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0xF409FD92D37CDEEE(sLocal_33[Global_4268340]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0x6F425BFEFBF9253B())
				{
					func_112(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xA1E7A40E1F56E511(&Global_4269615, 2);
				func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x039FBD08EEC1CA13(0.25f);
				unk_0x30F5A117BCA1FED8(sLocal_33[Global_4268340], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4268340 == 1 || Global_4268340 == 3)
			{
			}
			if (Global_4268340 == 2 || Global_4268340 == 4)
			{
			}
		}
	}
	if ((unk_0x26BB91778477F482(0, 173) && iLocal_156 == 0) && !func_145())
	{
		if (func_158())
		{
			func_103(0);
			Global_4268339++;
			unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
		}
		if (Global_4268339 == 13)
		{
			Global_4268339 = 0;
		}
		if (Global_4268339 == 0)
		{
			if (func_158())
			{
				func_103(0);
			}
		}
		else
		{
			func_113();
		}
		func_58();
	}
	if ((unk_0x80E2BA2BD5AB1A3F(0, 184) && iLocal_156 == 0) && !func_145())
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && !unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
			{
				Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
				unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
				func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_148(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x9B35D07DCD0F0B43();
				while (unk_0x9B35D07DCD0F0B43() < (iLocal_135 + iLocal_139) && Global_19486.f_1 > 3)
				{
					func_143();
					func_125();
					func_83();
					unk_0xA42289DB8250C2C0();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0xCFF6AB47B7B014FF(iLocal_112);
					iLocal_131 = 1;
					func_57(1);
					func_56();
					unk_0xA1E7A40E1F56E511(&Global_7358, 3);
					iLocal_65 = unk_0x9B35D07DCD0F0B43();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_57(0);
					iLocal_131 = 0;
					unk_0x3B76114EC84D5812(&Global_7358, 3);
				}
				iLocal_135 = unk_0x9B35D07DCD0F0B43();
				while (unk_0x9B35D07DCD0F0B43() < (iLocal_135 + iLocal_137) && Global_19486.f_1 > 3)
				{
					func_143();
					func_125();
					func_83();
					unk_0xA42289DB8250C2C0();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_148(uLocal_140, "OPEN_SHUTTER");
				if (func_158())
				{
					if (Global_4268340 == 0)
					{
						if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
						{
							func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
				{
					func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_125();
				func_143();
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (iLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (unk_0x26BB91778477F482(0, 40) || unk_0x26BB91778477F482(0, 41))
			{
				fLocal_114 = unk_0x158F68062D7641AF();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0xDE3C2FB26058823A(iLocal_112))
					{
						unk_0x9964F5BBD9415AB7(iLocal_112, "Camera_Zoom", &Global_19475, 1);
					}
				}
				else
				{
					unk_0xCFF6AB47B7B014FF(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x3772881BFFE6C3F8(0, 40) || unk_0x3772881BFFE6C3F8(0, 41))
		{
			fLocal_114 = unk_0x158F68062D7641AF();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0xDE3C2FB26058823A(iLocal_112))
				{
					unk_0x9964F5BBD9415AB7(iLocal_112, "Camera_Zoom", &Global_19475, 1);
				}
			}
			else
			{
				unk_0xCFF6AB47B7B014FF(iLocal_112);
			}
		}
		else
		{
			unk_0xCFF6AB47B7B014FF(iLocal_112);
		}
	}
	if ((func_98(2, Global_19455, 0) && !func_110()) && !func_98(2, Global_19454, 0))
	{
		fLocal_75 = unk_0x9199CADAF773DD06();
		fLocal_76 = unk_0x18433C7A4995B3A1();
		unk_0x7062F65EFC052EA0(0, 0);
		unk_0xA1E7A40E1F56E511(&Global_7356, 21);
		unk_0xCFF6AB47B7B014FF(iLocal_112);
		iLocal_127 = 1;
		func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_149(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x9964F5BBD9415AB7(-1, "Camera_Shoot", &Global_19475, 1);
		func_148(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0x083A4D953C3D26BA(Local_84, 0);
		if (!func_158())
		{
			func_103(1);
		}
		Global_21841 = 1;
		unk_0xE845A888B98DD9F6(0, 1);
		while (Global_21840 < 6 && Global_19486.f_1 > 3)
		{
			func_143();
			func_125();
			func_83();
			func_130();
			unk_0xA42289DB8250C2C0();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4E71BBB72EAD9E29(0, 0);
		if (Global_19428)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x9B35D07DCD0F0B43();
		while (unk_0x9B35D07DCD0F0B43() < (iLocal_135 + iLocal_138) && Global_19486.f_1 > 3)
		{
			func_143();
			func_125();
			func_83();
			unk_0xA42289DB8250C2C0();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_148(uLocal_140, "OPEN_SHUTTER");
		unk_0x3B76114EC84D5812(&Global_7356, 21);
		func_115();
		if (Global_19486.f_1 > 3)
		{
			if (Global_76577)
			{
				func_21(1086, 1, -1);
				func_20();
				func_17(-1492367786, 23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x7EDBC2F023CB055F(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x7EDBC2F023CB055F(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x7EDBC2F023CB055F(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_20();
			}
			func_112(0);
		}
		func_125();
	}
	if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
	{
		if (func_98(2, Global_19458, 0))
		{
			unk_0x7062F65EFC052EA0(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA42289DB8250C2C0();
			func_143();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA42289DB8250C2C0();
			func_143();
			unk_0x5C27CA715BA21550();
			unk_0x8D55F3642F7BB7C1();
			Global_21842 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_21838 = 1;
			unk_0xE845A888B98DD9F6(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			}
			func_108(0, 0);
			func_112(0);
			iLocal_115 = 0;
			func_103(1);
			if (!Global_2531497.f_6251)
			{
				unk_0xA1E7A40E1F56E511(&Global_7356, 9);
			}
			unk_0x269298D09D57BFCF(0);
			iLocal_142 = 0;
			func_149(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_15(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_14(unk_0x0FA8183DAD2B3203());
			if (func_13(iVar0) && (!func_61(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_13(Global_111560.f_2358.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_19(iParam1, iParam2))
	{
		iVar0 = func_18();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_18()
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

int func_19(int iParam0, var uParam1)
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

void func_20()
{
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_19423 = { Global_19439[Global_19431 /*3*/] };
	func_101(0, 1);
	func_108(0, 0);
	func_112(0);
	iLocal_115 = 0;
	func_103(1);
	if (!unk_0xA2BC31158C8CEFD2(Global_7357, 28))
	{
		if (unk_0x954A22460A564399() == 0)
		{
			if (unk_0xDB02E0A2E60C82EB())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_25(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_26(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_26(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_26(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_26(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_26(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_26(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_26(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_26(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_26(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_26(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_26(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_26(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_26(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_26(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_26(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_26(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_26(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_26(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_26(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_26(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_26(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_26(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_26(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_26(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_26(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_26(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_26(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_26(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_26(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_26(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_26(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_26(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_26(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_26(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_26(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_26(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_26(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_26(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_26(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_26(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_26(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_26(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_26(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_26(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_26(uParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_26(uParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_23(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

int func_24(int iParam0)
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

int func_25(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_26(uParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

var func_27()
{
	return Global_1312745;
}

void func_28()
{
	if (iLocal_156 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_149(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_149(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_145())
		{
			func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
			func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_280");
		}
		else
		{
			func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
			func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_280");
		}
		if (iLocal_131)
		{
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
				{
					if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_76577 == 0 && unk_0x222F76006659B0EB(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(2, 183, 1), "CELL_GRID");
					func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
					if (func_158())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_62)
							{
								func_67(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
			{
				if (!unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
				{
					if (!func_145())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
						func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(2, 183, 1), "CELL_GRID");
						func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x357127A2E350E9F6(0, 39, 1), "CELL_284");
					}
					else
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
						if (!unk_0x59415A8719336539(0))
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(0, 210, 1), "CELL_284");
						}
						else
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xEEC24BCBD00C5C50(0, 29, 1), "CELL_284");
						}
					}
					if (!func_145())
					{
						if (func_158())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_63)
							{
								func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 182, 1), "CELL_FOCUS");
							}
							func_67(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
					if (func_158())
					{
						func_50(3f);
						func_49(4f);
						func_67(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_145())
				{
					if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
				{
					if (!func_145())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x357127A2E350E9F6(2, 183, 1), "CELL_GRID");
						func_67(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
					}
					else
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
						if (!unk_0x59415A8719336539(0))
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(0, 210, 1), "CELL_284");
						}
						else
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xEEC24BCBD00C5C50(0, 29, 1), "CELL_284");
						}
					}
					if (!func_145())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x357127A2E350E9F6(0, 39, 1), "CELL_284");
					}
					if (!func_145())
					{
						if (func_158())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_63)
							{
								func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 182, 1), "CELL_FOCUS");
							}
							func_67(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
					if (func_158())
					{
						func_50(3f);
						func_49(4f);
						func_67(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xF1BC72CEC2746995(uLocal_141, "SET_MAX_WIDTH");
		unk_0xD435957F6275B434(fLocal_77);
		unk_0xAC7C2DE2DDC7AF03();
		func_149(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_29(float fParam0)
{
	func_67(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x357127A2E350E9F6(0, 174, 1), "CELL_ACTION");
}

int func_30(int iParam0)
{
	if (unk_0x393E9918BC37548A())
	{
		if (func_48(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_31(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(unk_0x0FA8183DAD2B3203(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar6;
	var uVar12;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (func_47())
	{
		return 0;
	}
	uVar0 = 5;
	uVar6 = 5;
	uVar12 = 6;
	if (iParam1 == 0)
	{
		iVar22 = 3;
	}
	else if (bParam3)
	{
		iVar22 = 1;
	}
	else if (bParam4)
	{
		iVar22 = 2;
	}
	else
	{
		iVar22 = 0;
	}
	func_40(iParam1, iParam2, &uVar0, &uVar6, &uVar12, iVar22, bParam5);
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x7F375072508F738F(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar19 = func_39(iParam0);
			if (!iVar19 == -1)
			{
				if (func_38(&uVar0, iVar19))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar20 = func_37(iParam0);
			if (!iVar20 == -1)
			{
				if (func_35(&uVar6, iVar20))
				{
					return 1;
				}
			}
		}
		if (unk_0x393E9918BC37548A())
		{
			iVar21 = func_34(iParam0);
			if (!iVar21 == 0)
			{
				if (func_33(&uVar12, iVar21))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_34(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF7BAF104A598DD7E(iParam0, 1);
	return uVar0;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_37(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xC74E62D8CDF80E57(iParam0, 0);
	return uVar0;
}

bool func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

var func_39(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xC74E62D8CDF80E57(iParam0, 0);
	return uVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 4, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 62, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 52:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 66, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 53:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 54:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 55:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 56:
				case 57:
				case 58:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 19, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 4, 1);
							break;
						
						case 1:
							func_46(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 37, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 36, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 1, 1);
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 5, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 1, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 5, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 12, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 23, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 29, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 33, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_40(2, 52, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_40(2, 53, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_46(uParam2, 124, 1);
	func_46(uParam2, 125, 1);
	func_46(uParam2, 126, 1);
	func_46(uParam2, 127, 1);
	func_46(uParam2, 128, 1);
	func_46(uParam2, 129, 1);
	func_46(uParam2, 130, 1);
	func_46(uParam2, 131, 1);
	func_46(uParam2, 132, 1);
	func_46(uParam2, 133, 1);
	func_46(uParam2, 136, 1);
	func_46(uParam2, 138, 1);
	func_46(uParam2, 139, 1);
	func_46(uParam2, 143, 1);
	func_46(uParam2, 144, 1);
	func_46(uParam2, 145, 1);
	func_46(uParam2, 147, 1);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x3B76114EC84D5812(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 5, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 7, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 10:
					func_46(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 4, 1);
						func_44(uParam3, 6, 1);
						func_44(uParam3, 10, 1);
						func_44(uParam3, 54, 1);
						func_44(uParam3, 55, 1);
						func_44(uParam3, 56, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 106, 1);
						func_44(uParam3, 114, 1);
						func_44(uParam3, 116, 1);
						func_44(uParam3, 117, 1);
						func_44(uParam3, 118, 1);
						func_44(uParam3, 119, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 9, 1);
						func_42(uParam2, 10, 1);
						func_42(uParam2, 53, 1);
						func_42(uParam2, 56, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 36, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 14, 1);
						func_42(uParam2, 105, 1);
						func_42(uParam2, 113, 1);
						func_42(uParam2, 114, 1);
						func_42(uParam2, 115, 1);
						func_42(uParam2, 116, 1);
						func_42(uParam2, 117, 1);
					}
					func_46(uParam4, 2, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_44(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_46(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 7, 1);
						func_44(uParam3, 0, 1);
						func_44(uParam3, 12, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 15, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 17, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 21, 1);
						func_44(uParam3, 25, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 30, 1);
						func_44(uParam3, 31, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 55, 1);
						func_42(uParam2, 0, 1);
						func_42(uParam2, 2, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 7, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 11, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 15, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 17, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
						func_42(uParam2, 20, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 22, 1);
						func_42(uParam2, 54, 1);
						func_42(uParam2, 24, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 30, 1);
						func_42(uParam2, 31, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 36, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x3B76114EC84D5812(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_47()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_49(float fParam0)
{
	func_67(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x357127A2E350E9F6(0, 172, 1), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1672541 == 1)
	{
		fParam0 = -1f;
	}
	func_67(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x357127A2E350E9F6(0, 173, 1), "CELL_FILTER");
}

void func_51()
{
	if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 183, 1), "CELL_GRID");
	func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_62)
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_76577 == 0 && unk_0x222F76006659B0EB(joaat("pi_menu")) > 0) && func_60())
		{
			unk_0xF1BC72CEC2746995(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x282C78036676E0C2(1);
			unk_0x759AC38FBC6CCA9E("CELL_ACTTL");
			unk_0xA89C789CC9FEF523(unk_0xD54FB72F71EFE6C4(&Global_4270600));
			unk_0x81019766FF500CCA();
			unk_0x282C78036676E0C2(0);
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

void func_52(float fParam0)
{
	func_67(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x357127A2E350E9F6(0, 175, 1), "CELL_ACCYC");
}

void func_53()
{
	func_149(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_149(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 39, 1), "CELL_284");
	func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
	func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
	func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_280");
	unk_0xF1BC72CEC2746995(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD435957F6275B434(fLocal_77);
	unk_0xAC7C2DE2DDC7AF03();
	func_149(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_54()
{
	if (iLocal_156 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_149(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_149(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
		func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(2, 179, 1), func_65());
		if (iLocal_131)
		{
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
				{
					if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_158())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_76577 == 0 && unk_0x222F76006659B0EB(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(2, 183, 1), "CELL_GRID");
					func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
					if (func_158())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_62)
							{
								func_67(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
			{
				if (!unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(2, 183, 1), "CELL_GRID");
					func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
					func_67(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x357127A2E350E9F6(0, 39, 1), "CELL_284");
					if (func_158())
					{
						func_50(6f);
						func_49(7f);
						func_67(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
					if (func_158())
					{
						func_50(3f);
						func_49(4f);
						func_67(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) == 2)
			{
				if (!func_145())
				{
					if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x357127A2E350E9F6(2, 183, 1), "CELL_GRID");
				func_67(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
				func_67(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x357127A2E350E9F6(0, 39, 1), "CELL_284");
				if (func_158())
				{
					if (!func_145())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_63)
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 182, 1), "CELL_FOCUS");
						}
						func_67(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_145())
					{
						if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
					if (func_158())
					{
						if (!func_145())
						{
							func_50(4f);
							func_49(5f);
							func_67(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x357127A2E350E9F6(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0xF1BC72CEC2746995(uLocal_141, "SET_MAX_WIDTH");
		unk_0xD435957F6275B434(fLocal_77);
		unk_0xAC7C2DE2DDC7AF03();
		func_149(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_55()
{
	func_149(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_149(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 39, 1), "CELL_284");
	func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_285");
	func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(2, 179, 1), func_65());
	func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 177, 1), "CELL_281");
	unk_0xF1BC72CEC2746995(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD435957F6275B434(fLocal_77);
	unk_0xAC7C2DE2DDC7AF03();
	func_149(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_131)
	{
		unk_0xA291E27354439AE9(fLocal_73, 1065353216);
		unk_0xB489E71A45CDC02F(fLocal_74);
	}
}

void func_57(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4456448.f_185406 == 1)
	{
	}
	else if (Global_4456448.f_185407 == 1)
	{
	}
	else
	{
		unk_0x36A41B099CF6C8EB(iParam0);
	}
}

void func_58()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x2553916E420E8EF0(sLocal_19[Global_4268339], "phone_cam12DUMMY"))
		{
			unk_0x4FF323F6E211109B(0);
			unk_0xADF7A23CAC42413F(0);
		}
		else
		{
			unk_0x4FF323F6E211109B(1);
			unk_0xADF7A23CAC42413F(1);
		}
	}
}

void func_59()
{
	func_149(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_158())
	{
		if (Global_1672541 == 0)
		{
			unk_0x6793D62D4C7127BB("phone_cam");
		}
	}
}

int func_60()
{
	if (func_61(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if ((unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/] || unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/]) || unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				return 1;
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
	return 1;
}

bool func_61(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_62(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

void func_63()
{
	if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x59415A8719336539(2))
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 30, 1), "CELL_RT_RSTICK");
		func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEEC24BCBD00C5C50(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 1, 1), "CELL_RT_RSTICK");
		func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEEC24BCBD00C5C50(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (unk_0x59415A8719336539(2) || unk_0x39FDED461BF385C3())
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x357127A2E350E9F6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_67(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEEC24BCBD00C5C50(0, 1, 1), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x357127A2E350E9F6(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x357127A2E350E9F6(0, 39, 1), "CELL_LT_LSTICKZ");
		func_67(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x357127A2E350E9F6(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_66())
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

int func_66()
{
	switch (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33)
	{
		case 233:
			switch (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_181)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_181)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1703066)
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x9591DE0F00127F2A(uParam3))
	{
		func_68(uParam3);
	}
	if (!unk_0x9591DE0F00127F2A(sParam4))
	{
		func_62(sParam4);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_68(var uParam0)
{
	unk_0x7151302E2AA285DC(uParam0);
}

void func_69()
{
	if (Global_76577)
	{
		switch (Global_21922)
		{
			case 0:
				if (unk_0x59415A8719336539(2))
				{
					func_144("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_144("CELL_CAM_SELFIE_0", -1);
				}
				Global_21922++;
				break;
			
			case 1:
				if (!unk_0x0945988C02AF3025())
				{
					if (unk_0x59415A8719336539(2))
					{
						func_144("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_144("CELL_CAM_SELFIE_1", -1);
					}
					Global_21922++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_21921)
		{
			case 0:
				if (unk_0x59415A8719336539(2))
				{
					func_144("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_144("CELL_CAM_SELFIE_0", -1);
				}
				Global_21921++;
				break;
			
			case 1:
				if (!unk_0x0945988C02AF3025())
				{
					if (unk_0x59415A8719336539(2))
					{
						func_144("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_144("CELL_CAM_SELFIE_1", -1);
					}
					Global_21921++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x59415A8719336539(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x3772881BFFE6C3F8(2, iVar10) && !unk_0x3772881BFFE6C3F8(2, iVar9))
	{
		unk_0x572062A62138FBA2(0, 2, 1);
		unk_0x572062A62138FBA2(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 2)) * 127;
		if (unk_0x59415A8719336539(2))
		{
			if (unk_0x25A1A0BF87F74E56(iVar0) > 28 || unk_0x25A1A0BF87F74E56(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x25A1A0BF87F74E56(iVar2) > 28 || unk_0x25A1A0BF87F74E56(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0x59415A8719336539(2))
		{
			fVar7 = unk_0x581F0AD9C3973F33(0, 290);
			fVar8 = unk_0x581F0AD9C3973F33(0, 291);
			if (unk_0x8498E3AABF2B8030())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x25A1A0BF87F74E56(iVar0) > 28 || unk_0x25A1A0BF87F74E56(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_73(fVar5);
		func_72(fVar6);
		func_71(fVar4);
	}
	else if (!unk_0x3772881BFFE6C3F8(2, iVar9))
	{
		unk_0x583A42EE47B55D77(0, 2, 1);
		unk_0x583A42EE47B55D77(0, 1, 1);
	}
}

void func_71(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	unk_0xE101517C7FE47B13(fLocal_161);
}

void func_72(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	unk_0xD71BB1F34F680689(fLocal_162);
}

void func_73(float fParam0)
{
	fLocal_163 = (fLocal_163 + fParam0);
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	unk_0x7F0767E4E6C5AB63(fLocal_163);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x59415A8719336539(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x3772881BFFE6C3F8(2, iVar10))
		{
			if (unk_0x26BB91778477F482(2, 178) && !func_145())
			{
				unk_0x7E7462D5485C376D(0.5f);
				unk_0x879C397B0F766DFA(0.85f);
				unk_0x7D1CBDC4563F6B1E(0.5f);
				unk_0x400201DE47AC6F15(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x3772881BFFE6C3F8(2, iVar10) && !unk_0x3772881BFFE6C3F8(2, iVar11))
	{
		if (unk_0x26BB91778477F482(2, 178) && !func_145())
		{
			unk_0x7E7462D5485C376D(0.5f);
			unk_0x879C397B0F766DFA(0.85f);
			unk_0x7D1CBDC4563F6B1E(0.5f);
			unk_0x400201DE47AC6F15(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0x572062A62138FBA2(0, 2, 1);
		unk_0x572062A62138FBA2(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 2)) * 127;
		if (unk_0x59415A8719336539(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 39)) * 127;
			fVar8 = unk_0x581F0AD9C3973F33(0, 290);
			fVar9 = unk_0x581F0AD9C3973F33(0, 291);
			if (unk_0x8498E3AABF2B8030())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x25A1A0BF87F74E56(iVar2) > 15 || unk_0x25A1A0BF87F74E56(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x25A1A0BF87F74E56(iVar0) > 28 || unk_0x25A1A0BF87F74E56(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_78(fVar6);
		func_77(fVar7);
		func_76(fVar4);
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
	else if (!unk_0x0B6782DED1C4B3B1(2, iVar11))
	{
		unk_0x583A42EE47B55D77(0, 2, 1);
		unk_0x583A42EE47B55D77(0, 1, 1);
	}
	if (!unk_0x0B6782DED1C4B3B1(2, iVar10) && !unk_0x0B6782DED1C4B3B1(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x581F0AD9C3973F33(0, 293)) * 127;
		if (unk_0x25A1A0BF87F74E56(iVar2) > 28 || unk_0x25A1A0BF87F74E56(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x25A1A0BF87F74E56(iVar0) > 28 || unk_0x25A1A0BF87F74E56(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
}

void func_75(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	unk_0x7D1CBDC4563F6B1E(fLocal_159);
}

void func_76(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	unk_0x400201DE47AC6F15(fLocal_160);
}

void func_77(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	unk_0x879C397B0F766DFA(fLocal_158);
}

void func_78(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	unk_0x7E7462D5485C376D(fLocal_157);
}

void func_79()
{
	if (Global_76837 || Global_76838)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_4456448.f_185406 == 0 && Global_4456448.f_185407 == 0)
			{
				unk_0x53F520B89860756C(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_19428)
		{
			if (Global_19664)
			{
				if (iLocal_150 == 0)
				{
					if (Global_19486.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_81(255, 255, 255, 255);
			func_80(0.059f, 0.644f, "CELL_284", 0);
			func_81(255, 255, 255, 255);
			func_80(0.165f, 0.644f, "CELL_285", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.75f, "CELL_280", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19428)
	{
	}
	else
	{
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.75f, func_65(), 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.79f, "CELL_286", 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_80(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x6EF0D5178A3B92EF(sParam2);
	unk_0xBD217E52410D1B67(fParam0, fParam1, iParam3);
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x8E0F19C19C409DDB(0.4f, 0.4f);
	unk_0xF5B822826ECBA108(0, 0, 0, 0, 0);
	unk_0x0E4AB43BE38970E3(1, 0, 0, 0, 205);
	unk_0xD1FE03DF202132A6(1);
	unk_0xDBA848DABDEF9021(0);
	unk_0x7DCBD85F58FA8F39(iParam0, iParam1, iParam2, iParam3);
}

void func_82()
{
	unk_0xA291E27354439AE9(fLocal_75, 1065353216);
	unk_0xB489E71A45CDC02F(fLocal_76);
}

void func_83()
{
	unk_0x572062A62138FBA2(0, 25, 1);
	unk_0x572062A62138FBA2(0, 44, 1);
	unk_0x572062A62138FBA2(0, 3, 1);
	unk_0x572062A62138FBA2(0, 4, 1);
	unk_0x572062A62138FBA2(0, 5, 1);
	unk_0x572062A62138FBA2(0, 6, 1);
	unk_0x572062A62138FBA2(0, 1, 1);
	unk_0x572062A62138FBA2(0, 2, 1);
	unk_0x572062A62138FBA2(0, 39, 1);
	unk_0x572062A62138FBA2(0, 47, 1);
	unk_0x572062A62138FBA2(0, 56, 1);
}

void func_84()
{
	Local_87 = { Global_19439[Global_19431 /*3*/] };
	if (Global_19428)
	{
		if (func_87())
		{
			unk_0xB1B52CCC3333E09F(&Local_93);
			Local_87 = { Local_93 };
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		func_1(1);
		if (iLocal_121)
		{
			Local_81.f_0 = (Local_81.f_0 + 12f);
		}
		if (Local_81.f_0 > Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
		{
			Local_81.f_0 = Local_87.f_0;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_7358, 4))
		{
			if (Local_81.f_1 < (Local_87.f_1 + 15f) || Local_81.f_1 == (Local_87.f_1 + 15f))
			{
				Local_81.f_1 = (Local_87.f_1 + 15f);
				iLocal_122 = 0;
			}
		}
		else if (Local_81.f_1 < (Local_87.f_1 + 10f) || Local_81.f_1 == (Local_87.f_1 + 10f))
		{
			Local_81.f_1 = (Local_87.f_1 + 10f);
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (func_87() == 0)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7358, 4))
			{
				Local_87.f_1 = (Local_87.f_1 + 15f);
			}
			else
			{
				Local_87.f_1 = (Local_87.f_1 + 10f);
			}
			Local_87.f_0 = (Local_87.f_0 - 14f);
		}
		else
		{
			Local_87 = { Global_19432[Global_19431 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x4577629BF7B43F7F(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0x083A4D953C3D26BA(Local_84, 0);
			if (!unk_0xA2BC31158C8CEFD2(Global_7356, 22))
			{
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_85();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_85()
{
	func_149(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_149(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xA2BC31158C8CEFD2(Global_7357, 28))
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_286");
	}
	else
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(2, 178, 1), "CELL_277");
		func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xF1BC72CEC2746995(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD435957F6275B434(fLocal_77);
	unk_0xAC7C2DE2DDC7AF03();
	func_149(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_86()
{
	func_149(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_149(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xA2BC31158C8CEFD2(Global_7357, 28))
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(2, 179, 1), func_65());
		func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_286");
	}
	else
	{
		func_67(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x357127A2E350E9F6(2, 179, 1), func_65());
		func_67(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x357127A2E350E9F6(2, 178, 1), "CELL_277");
		func_67(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x357127A2E350E9F6(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xF1BC72CEC2746995(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD435957F6275B434(fLocal_77);
	unk_0xAC7C2DE2DDC7AF03();
	func_149(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_61(14))
		{
			return 0;
		}
		if (unk_0xA4E0D905CE4E7657(unk_0x0FA8183DAD2B3203(), 0))
		{
			return 0;
		}
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!unk_0x65218F793B9F3C45())
			{
				if (unk_0xE294A1321110B3E9(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xDC58B22FD83FE49F(unk_0x0FA8183DAD2B3203()) || unk_0x2A58EB47597ACFA3(unk_0x0FA8183DAD2B3203())) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x05742CF45F4CFB9C(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
		if (Global_110608)
		{
			return 0;
		}
	}
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x65218F793B9F3C45()))
	{
		iVar2 = 1;
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				iVar3 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
				if ((((((((unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(iVar3)) || unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(iVar3))) || unk_0x79676C1B659A9398(unk_0x7F375072508F738F(iVar3))) || unk_0x7F375072508F738F(iVar3) == joaat("seashark")) || unk_0x7F375072508F738F(iVar3) == joaat("seashark2")) || unk_0x7F375072508F738F(iVar3) == joaat("rhino")) || unk_0x7F375072508F738F(iVar3) == joaat("submersible")) || unk_0x7F375072508F738F(iVar3) == joaat("submersible2")) || unk_0x7F375072508F738F(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269893 || iVar2 == 1)
	{
		if (unk_0x222F76006659B0EB(joaat("apptrackify")) > 0 || Global_111560.f_14046.f_89)
		{
			if (unk_0x222F76006659B0EB(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_88()
{
	unk_0x572062A62138FBA2(0, 47, 1);
	unk_0x1F4FA01F906F33E5(0, Global_19456);
	Local_84 = { Global_19446 };
	Local_87 = { Global_19439[Global_19431 /*3*/] };
	if (func_87())
	{
		unk_0x81984BCCC3300DCC(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0xB1B52CCC3333E09F(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_19428)
	{
		func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_57(0);
		iLocal_131 = 0;
		if (unk_0xA2BC31158C8CEFD2(Global_7356, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_89();
		}
		if (iLocal_121)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
			{
				Local_81.f_0 = (Local_81.f_0 + 2f);
			}
			else
			{
				Local_81.f_0 = (Local_81.f_0 + 12f);
			}
		}
		if (Local_81.f_0 > Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
		{
			Local_81.f_0 = Local_87.f_0;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (Local_81.f_1 < Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
		{
			Local_81.f_1 = Local_87.f_1;
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0)
		{
			if (iLocal_118)
			{
				Local_78.f_0 = (Local_78.f_0 + 1f);
			}
			if (Local_78.f_0 > Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
			{
				Local_78.f_0 = Local_84.f_0;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_78.f_1 = (Local_78.f_1 - 2f);
			}
			if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
			{
				Local_78.f_1 = Local_84.f_1;
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				Local_78.f_2 = (Local_78.f_2 - 14f);
			}
			if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
			{
				Local_78.f_2 = Local_84.f_2;
				iLocal_120 = 0;
			}
		}
		if (iLocal_126)
		{
			Local_78 = { Local_84 };
			Local_81 = { Local_87 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			if (func_87() == 0)
			{
				unk_0x083A4D953C3D26BA(Local_78, 0);
				unk_0x4577629BF7B43F7F(Local_81);
			}
			func_101(0, 1);
		}
		else if (func_87() == 0)
		{
			unk_0x083A4D953C3D26BA(Local_78, 0);
			unk_0x4577629BF7B43F7F(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_89();
		}
	}
	else
	{
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 + 1f);
		}
		if (Local_78.f_0 > Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 2f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 - 7f);
		}
		if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_89();
		}
	}
	unk_0x083A4D953C3D26BA(Local_78, 0);
}

void func_89()
{
	func_1(0);
	if (func_87() == 0)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_7356, 30))
		{
			unk_0x4577629BF7B43F7F(Global_19432[Global_19431 /*3*/]);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19439[Global_19431 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0x083A4D953C3D26BA(Local_78, 0);
	}
	Global_21838 = 0;
	func_108(0, 0);
	func_112(0);
	iLocal_115 = 0;
	func_103(1);
	Global_19473 = 1;
	Global_21841 = 0;
	if (Global_19486.f_1 > 4)
	{
		Global_19486.f_1 = 6;
		Global_19464 = 1;
		func_90();
	}
	if (unk_0x08EA887200715AD9(uLocal_140))
	{
		func_148(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0xA42289DB8250C2C0();
	unk_0x749CA887CB0AFEC9(&uLocal_141);
	unk_0x749CA887CB0AFEC9(&uLocal_140);
	if (Global_19666 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 17);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 17);
	}
	unk_0x3B76114EC84D5812(&Global_7356, 18);
	unk_0x3B76114EC84D5812(&Global_7356, 21);
	unk_0xE845A888B98DD9F6(0, 1);
	unk_0x3B76114EC84D5812(&Global_7358, 3);
	unk_0x3B76114EC84D5812(&Global_4269615, 3);
	unk_0x269298D09D57BFCF(0);
	unk_0x69680E067F37891A(unk_0x7C7787D2D7139A85(), 1);
	unk_0x129AB650651225C5(15);
	Global_21842 = 1;
	unk_0xCFF6AB47B7B014FF(iLocal_112);
	unk_0x0972EA9E8102C153(iLocal_112);
	unk_0xA8E0AD0360E6D52A();
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0xCB2226D6817DFC2E(unk_0x0FA8183DAD2B3203(), "Mood_Normal_1", 0);
		unk_0x2065A160187E5910(unk_0x0FA8183DAD2B3203());
	}
	func_103(1);
	unk_0x4FF323F6E211109B(0);
	unk_0xADF7A23CAC42413F(0);
	unk_0x039FBD08EEC1CA13(1f);
	if (Global_4268340 > 0 && Global_4268340 < 13)
	{
		unk_0xD73CEE901CAB1716(sLocal_33[Global_4268340]);
	}
	func_101(0, 1);
	if (func_156(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0x9C9E32388A7886A2();
}

void func_90()
{
	struct<3> Var0;
	
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!unk_0x08EA887200715AD9(Global_19467))
	{
		if (Global_76577)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_149(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_95(Global_7961);
			if (Global_7961 == 1)
			{
				func_149(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_149(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x3B76114EC84D5812(&Global_7356, 17);
			}
			else if (Global_76577)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x3B76114EC84D5812(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_94(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_94(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_94(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_94(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xA1E7A40E1F56E511(&Global_7356, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_149(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_94(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_93();
				func_149(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(4);
					unk_0xD02F24F3E2DB263A(0);
					unk_0xD02F24F3E2DB263A(2);
					unk_0x759AC38FBC6CCA9E("CELL_CONDFON");
					unk_0xA89C789CC9FEF523(&Global_20820);
					unk_0x81019766FF500CCA();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					unk_0xAC7C2DE2DDC7AF03();
				}
				else if (func_92(Global_6671, Global_19486) == 0)
				{
					func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_149(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_149(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_20818)
				{
					unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(4);
					unk_0xD02F24F3E2DB263A(0);
					unk_0xD02F24F3E2DB263A(2);
					unk_0x759AC38FBC6CCA9E("CELL_CONDFON");
					unk_0xA89C789CC9FEF523(&Global_20820);
					unk_0x81019766FF500CCA();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
					unk_0xAC7C2DE2DDC7AF03();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_92(Global_6671, Global_19486) == 0)
					{
						func_149(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_149(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &Var0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_149(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_91();
			break;
		
		default:
			break;
	}
}

void func_91()
{
	if (unk_0x08EA887200715AD9(Global_19467))
	{
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
		}
		else
		{
			func_94(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_92(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_93()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4269891)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_94(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0x9591DE0F00127F2A(sParam7))
	{
		func_62(sParam7);
	}
	if (!unk_0x9591DE0F00127F2A(iParam8))
	{
		func_62(iParam8);
	}
	if (!unk_0x9591DE0F00127F2A(iParam9))
	{
		func_62(iParam9);
	}
	if (!unk_0x9591DE0F00127F2A(iParam10))
	{
		func_62(iParam10);
	}
	if (!unk_0x9591DE0F00127F2A(iParam11))
	{
		func_62(iParam11);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_95(int iParam0)
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
		if (func_61(14))
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
								func_62(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar2);
								unk_0xAC7C2DE2DDC7AF03();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_94(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_96()
{
	switch (iLocal_100)
	{
		case 1:
			unk_0xE845A888B98DD9F6(0, 1);
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_28();
			}
			break;
		
		case 2:
			if (!unk_0xA2BC31158C8CEFD2(Global_7356, 22))
			{
				unk_0xE845A888B98DD9F6(0, 1);
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_85();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		if (!func_110())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 17);
		}
	}
	else if (func_110())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 17);
	}
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x26BB91778477F482(iParam0, uParam1) || (iParam2 == 1 && unk_0x80E2BA2BD5AB1A3F(iParam0, iParam1)))
	{
		if (unk_0xE434AB6E3DE89861())
		{
			if (unk_0x2F972EA053458B78() == 0 || (unk_0x4ABA84DE907E0474() && unk_0x59415A8719336539(2)))
			{
				return 0;
			}
		}
		if (unk_0xCD97B9861557C025() || unk_0x8E01A12946ECF396())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_99(bool bParam0)
{
	if (bParam0)
	{
		if (!func_100())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 18);
		}
	}
	else if (func_100())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 18);
	}
}

bool func_100()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 18);
}

void func_101(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_102(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

int func_102(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
			{
				return 1;
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_103(int iParam0)
{
	if ((Global_4456448.f_185406 == 0 && Global_4456448.f_185407 == 0) && Global_1672541 == 0)
	{
		if (func_104(unk_0x7C7787D2D7139A85()) && iParam0)
		{
			Global_1703199 = 1;
		}
		else
		{
			unk_0xBAA4E225DE364743();
		}
	}
}

int func_104(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_106(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_105(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_105(int iParam0)
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

int func_106(int iParam0, bool bParam1, bool bParam2)
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

int func_107()
{
	return -1;
}

void func_108(int iParam0, int iParam1)
{
	if (Global_4456448.f_185406 == 1)
	{
	}
	else if (Global_4456448.f_185407 == 1)
	{
	}
	else
	{
		unk_0x4E71BBB72EAD9E29(iParam0, iParam1);
	}
}

int func_109()
{
	if (unk_0xA2BC31158C8CEFD2(Global_7356, 15))
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 17);
}

void func_111()
{
	if (Global_19428)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_87())
		{
			unk_0x81984BCCC3300DCC(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0xB1B52CCC3333E09F(&Local_93);
			Local_87 = { Local_93 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		if (iLocal_120 == 0)
		{
			if (iLocal_121)
			{
				Local_81.f_0 = (Local_81.f_0 - 14f);
			}
			if (Local_81.f_0 < Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_81.f_1 = (Local_81.f_1 + 7f);
			}
			if (Local_81.f_1 > Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
			{
				iLocal_122 = 0;
			}
			if (iLocal_123)
			{
				Local_81.f_2 = (Local_81.f_2 + 12f);
			}
			if (Local_81.f_2 > Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
			{
				iLocal_123 = 0;
			}
		}
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 - 1f);
		}
		if (Local_78.f_0 < Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			Local_78.f_0 = Local_84.f_0;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 0.5f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			Local_78.f_1 = Local_84.f_1;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 11f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			Local_78.f_2 = Local_84.f_2;
			iLocal_120 = 0;
		}
		if (func_87() == 0)
		{
			unk_0x083A4D953C3D26BA(Local_78, 0);
			unk_0x4577629BF7B43F7F(Local_81);
		}
	}
	else
	{
		Local_84 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 - 1f);
		}
		if (Local_78.f_0 < Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 + 2f);
		}
		if (Local_78.f_1 > Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 7f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		unk_0x083A4D953C3D26BA(Local_78, 0);
	}
	if (Global_19428)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_87())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0x083A4D953C3D26BA(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x4577629BF7B43F7F(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_21839 = 0;
				func_108(1, 1);
				iLocal_115 = 1;
				func_112(1);
				func_59();
				func_113();
				func_57(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_125();
				func_149(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
				{
					func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_151();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0x083A4D953C3D26BA(Local_78, 0);
		Global_21839 = 0;
	}
}

void func_112(bool bParam0)
{
	if (func_158())
	{
		if (bParam0)
		{
			if (!unk_0x6F425BFEFBF9253B())
			{
				unk_0x16047FCC068E2DA7(1);
				if (Global_4268340 > 0 && Global_4268340 < 99)
				{
					unk_0x30F5A117BCA1FED8(sLocal_33[Global_4268340], 0);
					unk_0x039FBD08EEC1CA13(0.25f);
				}
			}
		}
		else if (unk_0x6F425BFEFBF9253B())
		{
			unk_0x16047FCC068E2DA7(0);
		}
	}
}

void func_113()
{
	if (Global_4268339 > 0 && Global_4268339 < 99)
	{
		if (Global_1672541 == 0)
		{
			unk_0x6793D62D4C7127BB(sLocal_19[Global_4268339]);
		}
	}
}

void func_114()
{
	if (Global_19428)
	{
		iLocal_125 = 0;
		func_59();
		func_101(1, 1);
		func_108(1, 1);
		iLocal_115 = 1;
		Global_21842 = 1;
	}
}

void func_115()
{
	if (Global_4456448.f_185406 == 1 && func_116())
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_7356, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_28();
		}
		if (unk_0x2553916E420E8EF0(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_116()
{
	if (((func_120() || func_119()) || func_118()) || func_117())
	{
		return 1;
	}
	return 0;
}

var func_117()
{
	return Global_2448961.f_19;
}

var func_118()
{
	return Global_2448961.f_17;
}

var func_119()
{
	return Global_2448961.f_16;
}

var func_120()
{
	return Global_2448961.f_15;
}

void func_121()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_122()
{
	unk_0x7062F65EFC052EA0(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_123()
{
	func_124();
}

void func_124()
{
	if (iLocal_151)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_151 = 0;
		}
	}
	if (iLocal_151 == 0)
	{
	}
}

void func_125()
{
	if (Global_19486.f_1 > 3)
	{
		if (!unk_0xCD97B9861557C025())
		{
			unk_0x1C65AC18AFC2CA39(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_126()
{
	if (func_61(14))
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
		Global_19486 = func_11();
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

void func_127(int iParam0)
{
	if (func_129())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_145())
		{
			func_101(1, 1);
		}
		else
		{
			func_101(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_128())
	{
		Global_19486.f_1 = 3;
	}
}

int func_128()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_130()
{
	unk_0x572062A62138FBA2(0, 0, 1);
	unk_0x572062A62138FBA2(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0x1F4FA01F906F33E5(0, Global_19459);
		unk_0x1F4FA01F906F33E5(0, Global_19456);
		unk_0x572062A62138FBA2(0, 278, 1);
		unk_0x572062A62138FBA2(0, 279, 1);
		unk_0x572062A62138FBA2(0, 280, 1);
		unk_0x572062A62138FBA2(0, 281, 1);
		unk_0x572062A62138FBA2(0, 282, 1);
		unk_0x572062A62138FBA2(0, 282, 1);
		unk_0x572062A62138FBA2(0, 284, 1);
		unk_0x572062A62138FBA2(0, 285, 1);
		unk_0x572062A62138FBA2(0, 69, 1);
		unk_0x572062A62138FBA2(0, 70, 1);
		unk_0x572062A62138FBA2(0, 114, 1);
		unk_0x572062A62138FBA2(0, 71, 1);
		unk_0x572062A62138FBA2(0, 72, 1);
		unk_0x572062A62138FBA2(0, 74, 1);
		unk_0x572062A62138FBA2(0, 75, 1);
		unk_0x572062A62138FBA2(0, 76, 1);
		unk_0x572062A62138FBA2(0, 73, 1);
		unk_0x572062A62138FBA2(0, 77, 1);
		unk_0x572062A62138FBA2(0, 78, 1);
		unk_0x572062A62138FBA2(0, 286, 1);
		unk_0x572062A62138FBA2(0, 287, 1);
		unk_0x572062A62138FBA2(0, 79, 1);
		unk_0x572062A62138FBA2(0, 80, 1);
		unk_0x572062A62138FBA2(0, 81, 1);
		unk_0x572062A62138FBA2(0, 82, 1);
		unk_0x572062A62138FBA2(0, 86, 1);
		unk_0x572062A62138FBA2(0, 59, 1);
		unk_0x572062A62138FBA2(0, 60, 1);
		unk_0x572062A62138FBA2(0, 61, 1);
		unk_0x572062A62138FBA2(0, 62, 1);
		unk_0x572062A62138FBA2(0, 63, 1);
		unk_0x572062A62138FBA2(0, 64, 1);
		unk_0x572062A62138FBA2(0, 87, 1);
		unk_0x572062A62138FBA2(0, 88, 1);
		unk_0x572062A62138FBA2(0, 89, 1);
		unk_0x572062A62138FBA2(0, 90, 1);
		unk_0x572062A62138FBA2(0, 107, 1);
		unk_0x572062A62138FBA2(0, 108, 1);
		unk_0x572062A62138FBA2(0, 109, 1);
		unk_0x572062A62138FBA2(0, 110, 1);
		unk_0x572062A62138FBA2(0, 111, 1);
		unk_0x572062A62138FBA2(0, 112, 1);
		unk_0x572062A62138FBA2(0, 113, 1);
		unk_0x572062A62138FBA2(0, 114, 1);
		unk_0x572062A62138FBA2(0, 91, 1);
		unk_0x572062A62138FBA2(0, 92, 1);
		unk_0x572062A62138FBA2(0, 68, 1);
		unk_0x572062A62138FBA2(0, 102, 1);
		unk_0x572062A62138FBA2(0, 136, 1);
		unk_0x572062A62138FBA2(0, 137, 1);
		unk_0x572062A62138FBA2(0, 138, 1);
		unk_0x572062A62138FBA2(0, 139, 1);
		unk_0x572062A62138FBA2(0, 102, 1);
	}
}

int func_131()
{
	var uVar0;
	
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0xBAA38708D7439CA7(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x300C62F79A4441EB(uVar0, -1, 0) == unk_0x0FA8183DAD2B3203())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()
{
	var uVar0;
	
	func_140(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_139())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_138())
	{
		return 1;
	}
	if (func_137(159))
	{
		if (!func_136())
		{
			return 1;
		}
	}
	if (func_137(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_133() != 0)
	{
		if (unk_0x222F76006659B0EB(func_133()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_133()
{
	switch (func_135())
	{
		case 0:
			return func_134();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_134()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_135()
{
	return Global_30736;
}

bool func_136()
{
	return Global_2448961.f_598;
}

int func_137(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_138()
{
	return Global_2458999;
}

bool func_139()
{
	return Global_2448961.f_593;
}

void func_140(var uParam0)
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
					func_141(iVar0);
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

void func_141(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_106(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(iVar3))
			{
				if (unk_0x5294582CE404D3F4(iVar3, 0))
				{
					iVar4 = unk_0x4D57D3E5ECE15A41(iVar3, 0);
					if (unk_0x3D65AB2C3D476E32(iVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_142(iVar4, &bVar5))
						{
							unk_0x302E0AC3BB715211(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xF25956700ADFD77F(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_142(int iParam0, var uParam1)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
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

void func_143()
{
	if (iLocal_156 == 1)
	{
		unk_0x0AF55029F939BA65(7);
		unk_0x0AF55029F939BA65(1);
		unk_0x0AF55029F939BA65(3);
		unk_0x0AF55029F939BA65(4);
		unk_0x0AF55029F939BA65(6);
		unk_0x0AF55029F939BA65(8);
		unk_0x0AF55029F939BA65(9);
		unk_0x0AF55029F939BA65(2);
	}
	else
	{
		unk_0x40984840FC30EC06();
	}
}

void func_144(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

bool func_145()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

void func_146()
{
	if (func_147())
	{
		unk_0xD700BB7358B774E0();
		if (unk_0xC855826D2556E58B(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_21842 = 1;
			Global_19486.f_1 = 3;
			unk_0xA8E0AD0360E6D52A();
		}
	}
	else
	{
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1)
		{
			if (iLocal_127 == 0)
			{
				if (unk_0x08EA887200715AD9(uLocal_140))
				{
					if (func_158())
					{
						if (Global_4268340 == 0)
						{
							if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
							{
								func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
						{
							func_149(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x08EA887200715AD9(uLocal_140))
			{
				func_149(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_149(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0xA8E0AD0360E6D52A();
	}
}

int func_147()
{
	if (Global_4456448.f_185406 == 1)
	{
		if (Global_76577)
		{
			return 0;
		}
	}
	if (Global_4456448.f_185407 == 1)
	{
		if (Global_76577)
		{
			return 0;
		}
	}
	if (unk_0xDB02E0A2E60C82EB() || unk_0xDC143D98E1977B20())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_7357, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_148(var uParam0, char* sParam1)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_149(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_150()
{
	if (Global_76577)
	{
		Global_19486 = 3;
	}
	else
	{
		Global_19486 = func_11();
	}
	if (Global_19486 > 3)
	{
		Global_19486 = 3;
	}
	return Global_111560.f_14046[Global_19486 /*20*/].f_7;
}

void func_151()
{
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	Global_21841 = 0;
	iLocal_127 = 0;
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		Local_67 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
	}
	if (Global_19428)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_125();
			func_83();
			unk_0xA42289DB8250C2C0();
		}
		func_148(uLocal_140, "OPEN_SHUTTER");
		func_143();
		func_115();
		iLocal_129 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_108(1, 1);
		func_112(1);
		func_59();
		func_113();
		func_57(0);
		iLocal_115 = 1;
	}
}

void func_152(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 15);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 15);
	}
}

bool func_153()
{
	return Global_1312850;
}

int func_154(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0x5294582CE404D3F4(iParam0, iParam1))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
			if (unk_0xD4B321D9096B01FC(uVar0))
			{
				iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
					{
						if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_155()
{
}

int func_156(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0xC4741D7AA5AAF9B6() != iParam0 && bParam2)
		{
			unk_0x0696366AB240E4CD(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_157()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (unk_0x4DFA158E3F06774B(unk_0x0FA8183DAD2B3203()))
		{
			unk_0x1C2AC11A8D8E19DD(unk_0x0FA8183DAD2B3203(), 0, 0);
			unk_0x7E7462D5485C376D(fLocal_157);
			unk_0x879C397B0F766DFA(fLocal_158);
			unk_0x7D1CBDC4563F6B1E(fLocal_159);
		}
		else
		{
			unk_0x7E7462D5485C376D(fLocal_157);
			unk_0x879C397B0F766DFA(fLocal_158);
			unk_0x7D1CBDC4563F6B1E(fLocal_159);
		}
	}
	unk_0x400201DE47AC6F15(fLocal_160);
	unk_0xE101517C7FE47B13(fLocal_161);
	unk_0xD71BB1F34F680689(fLocal_162);
	unk_0x7F0767E4E6C5AB63(fLocal_163);
	func_56();
}

int func_158()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}

