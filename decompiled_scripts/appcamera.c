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
	char* sLocal_18[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_32[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_46 = 0;
	char* sLocal_47[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	int iLocal_99 = 0;
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
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
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
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	char cLocal_144[16] = "";
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
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
	iLocal_58 = 1;
	bLocal_61 = true;
	bLocal_62 = true;
	fLocal_72 = 0f;
	fLocal_73 = 172f;
	fLocal_76 = 1f;
	iLocal_136 = 1200;
	iLocal_137 = 1200;
	iLocal_138 = 166;
	fLocal_155 = 0.5f;
	fLocal_156 = 0.85f;
	fLocal_157 = 0.5f;
	fLocal_158 = -0.25f;
	fLocal_159 = 0.25f;
	fLocal_160 = 0.3f;
	fLocal_161 = 0.3f;
	fLocal_162 = 0.075f;
	unk_0x3D0EAC6385DD6100();
	if (!func_132())
	{
		Global_2543373 = 99;
		Global_2543374 = 99;
		iLocal_56 = 99;
	}
	else
	{
		Global_2543373 = 0;
		Global_2543374 = 0;
	}
	sLocal_18[0] = "No_Filter";
	sLocal_18[1] = "phone_cam1";
	sLocal_18[2] = "phone_cam2";
	sLocal_18[3] = "phone_cam3";
	sLocal_18[4] = "phone_cam4";
	sLocal_18[5] = "phone_cam5";
	sLocal_18[6] = "phone_cam6";
	sLocal_18[7] = "phone_cam7";
	sLocal_18[8] = "phone_cam8";
	sLocal_18[9] = "phone_cam9";
	sLocal_18[10] = "phone_cam10";
	sLocal_18[11] = "phone_cam11";
	sLocal_18[12] = "phone_cam12";
	sLocal_32[0] = "No_Border";
	sLocal_32[1] = "frame1";
	sLocal_32[2] = "frame2";
	sLocal_32[3] = "frame3";
	sLocal_32[4] = "frame4";
	sLocal_32[5] = "frame5";
	sLocal_32[6] = "frame6";
	sLocal_32[7] = "frame7";
	sLocal_32[8] = "frame8";
	sLocal_32[9] = "frame9";
	sLocal_32[10] = "frame10";
	sLocal_32[11] = "frame11";
	sLocal_32[12] = "frame12";
	sLocal_47[0] = "No_Expression";
	sLocal_47[1] = "mood_Aiming_1";
	sLocal_47[2] = "mood_Happy_1";
	sLocal_47[3] = "mood_smug_1";
	sLocal_47[4] = "mood_Injured_1";
	sLocal_47[5] = "mood_sulk_1";
	sLocal_47[6] = "mood_Angry_1";
	func_131();
	if (func_130(1, 1, !iLocal_63))
	{
		iLocal_63 = 1;
	}
	func_129();
	iLocal_111 = unk_0xC488DC56F57F2505();
	if (Global_14338 == 0)
	{
		fLocal_95 = 0.207f;
		fLocal_96 = 0.158f;
		fLocal_97 = 0.207f;
		fLocal_98 = 0.335f;
	}
	else
	{
		fLocal_95 = 0.24f;
		fLocal_96 = 0.258f;
		fLocal_97 = 0.24f;
		fLocal_98 = 0.435f;
	}
	Global_16725 = 0;
	Global_16726 = 0;
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x47E0EF895F793256(unk_0x096275889B8E0EE0()))
		{
			Global_16725 = 1;
		}
		if (unk_0xCC931EEFAD541F92())
		{
			Global_16725 = 1;
		}
		if (unk_0xB86D29B10F627379(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0()), 0))
		{
			Global_16725 = 1;
		}
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
		{
			Global_16725 = 1;
		}
		if (unk_0x7122F97890EFE68D(unk_0x096275889B8E0EE0()))
		{
			Global_16725 = 1;
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (iLocal_130 == 1)
			{
				Global_16725 = 1;
			}
			uLocal_148 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
			if ((unk_0xDA76A9F39210D365(uLocal_148) == joaat("rhino") || unk_0xDA76A9F39210D365(iLocal_148) == joaat("cutter")) || unk_0xDA76A9F39210D365(iLocal_148) == joaat("submersible"))
			{
				Global_16725 = 1;
			}
			else if (unk_0xD214895E39AA3787(iLocal_148, -1) == unk_0x096275889B8E0EE0())
			{
				if (unk_0x56398BE65160C3BE(iLocal_148) > 0f)
				{
					if (!Global_68245)
					{
						if (!func_128())
						{
							unk_0xDD3F03022D31980D(unk_0x096275889B8E0EE0(), iLocal_148, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_68245)
	{
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			unk_0x7FF75CD5C710457F(unk_0x217E9DC48139933D(), 0);
		}
	}
	unk_0x7D1D4A3602B6AD4E(&Global_2263, 21);
	func_127(0);
	unk_0xF73FBE4845C43B5B(&Global_2263, 17);
	if (Global_14335 == 0)
	{
		func_126();
	}
	else
	{
		uLocal_139 = unk_0x67D02A194A2FC2BD("camera_gallery");
		uLocal_140 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		while (!unk_0x64BAE9BE701E6C19(uLocal_139) || !unk_0x64BAE9BE701E6C19(uLocal_140))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA8C44C13419634F2();
			unk_0x562F5D788AF3FA80(0, 25, 1);
		}
		if (Global_68245)
		{
			iLocal_143 = 2;
		}
		else
		{
			switch (func_125())
			{
				case 0:
					iLocal_143 = 2;
					break;
				
				case 2:
					iLocal_143 = 2;
					break;
				
				case 3:
					iLocal_143 = 2;
					break;
				}
		}
		func_124(uLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
		func_123(uLocal_139, "CLOSE_SHUTTER");
		unk_0xF6EA2AC68E7C7293(Global_14374, "DISPLAY_VIEW");
		unk_0xA734310215BCF528(16);
		unk_0xD4D85E4148B638AD();
	}
	Local_77 = { Global_14353 };
	Local_80 = { Global_14346[Global_14338 /*3*/] };
	Global_16726 = 1;
	iLocal_117 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	if (iLocal_130 == 0)
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2265, 3);
	}
	func_121();
	unk_0xCFCC78391C8B3814(4);
	if (unk_0xC23931AA79BE8893())
	{
	}
	if (Global_1602437.f_69971)
	{
	}
	if (unk_0x7A821A102AEDC6EC())
	{
		fLocal_76 = 1f;
	}
	else
	{
		fLocal_76 = 1f;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xA8C44C13419634F2();
		unk_0x562F5D788AF3FA80(0, 25, 1);
		unk_0x562F5D788AF3FA80(0, 0, 1);
		if (!Global_97353.f_12305.f_81)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 13))
			{
				if (!unk_0xA805B04DD97BE4E6())
				{
					if (!unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
					{
						if (iLocal_127 && iLocal_130 == 0)
						{
							unk_0xF73FBE4845C43B5B(&Global_2544648, 13);
							Global_97353.f_12305.f_81 = 1;
							func_120("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x535384D6067BA42E())
		{
			if (Global_1602437.f_69970 == 0 && Global_1602437.f_69971 == 0)
			{
				unk_0xBCECE9335F976364(15, 0f, -0.0375f);
			}
			unk_0xB5F6539FA93ECBF6(7);
			unk_0x36CDD81627A6FCD2();
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				unk_0x28AC5FC91EA70789(unk_0x096275889B8E0EE0(), 200, 1);
			}
			unk_0x562F5D788AF3FA80(0, 44, 1);
			unk_0x562F5D788AF3FA80(0, 47, 1);
			unk_0x562F5D788AF3FA80(0, 91, 1);
			unk_0x562F5D788AF3FA80(0, 92, 1);
			unk_0x562F5D788AF3FA80(0, 68, 1);
			if (iLocal_149 == 0)
			{
				unk_0xDA067FC477B3E571(0, Global_14366);
			}
			unk_0xDA067FC477B3E571(0, Global_14363);
			if (unk_0xF5472C80DF2FF847() || unk_0x02F39BEFE7B88D00())
			{
				iLocal_129 = 1;
				Global_14393.f_1 = 3;
				unk_0xFAEC088D28B1DE4A(0);
			}
			if (unk_0x232B4FD520BD9CEB())
			{
				Global_14393.f_1 = 3;
				unk_0xFAEC088D28B1DE4A(0);
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_2264, 3))
			{
				Global_14393.f_1 = 3;
				unk_0xFAEC088D28B1DE4A(0);
			}
			if (unk_0x03A753E2C8458335())
			{
				if (func_109())
				{
					Global_14393.f_1 = 3;
					unk_0xFAEC088D28B1DE4A(0);
				}
			}
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x6CA7C07CB3ECF0BA(unk_0x096275889B8E0EE0(), 0))
				{
					Global_14393.f_1 = 3;
					unk_0xFAEC088D28B1DE4A(0);
				}
				if ((unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0x936F967D4BE1CE9D(unk_0x217E9DC48139933D()))
				{
					if (func_108())
					{
					}
					else
					{
						Global_14393.f_1 = 3;
						unk_0xFAEC088D28B1DE4A(0);
					}
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					if (Global_68245 == 1)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
				{
					if (unk_0x4A77C3F73FD9E831(unk_0x096275889B8E0EE0()) > 0.3f)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					func_107();
					iLocal_148 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
					if (unk_0x56398BE65160C3BE(iLocal_148) < 0f)
					{
						func_105(0);
					}
					if (iLocal_114 == 1)
					{
						if (iLocal_115 == 1)
						{
							if (!unk_0x4604B17C43B1F4E2())
							{
								func_105(0);
							}
						}
						else if (!unk_0x4604B17C43B1F4E2())
						{
							iLocal_115 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0xA8C44C13419634F2();
						}
					}
				}
				else if (Global_68245 == 0)
				{
					if (unk_0x4ED6CFDFE8D4131A(Global_2263, 18))
					{
						func_104();
						if ((Global_14393 == 0 || Global_14393 == 1) || Global_14393 == 2)
						{
							if (!unk_0x128D45C556334392(unk_0x096275889B8E0EE0()))
							{
								if (unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
								{
								}
								else
								{
									Global_14393.f_1 = 3;
									unk_0xFAEC088D28B1DE4A(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_141)
			{
				func_103();
			}
			if (Global_14393.f_1 < 4)
			{
			}
			if (iLocal_152 == 0)
			{
				if (iLocal_102 == 0)
				{
					if (iLocal_103 == 0)
					{
						if (iLocal_110 == 0)
						{
							if (Global_14393.f_1 > 3)
							{
								if (iLocal_149)
								{
									func_101();
									if (Global_16730 == 0 && Global_16727 == 6)
									{
										unk_0x393FC215FEC6D8F1(0, 1);
										unk_0x58F441B90EA84D06();
										iLocal_149 = 0;
										func_100();
										if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
										{
											Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
										}
										func_99();
										iLocal_108++;
										if (func_132())
										{
											func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
									}
									if (Global_16727 == 0)
									{
										iLocal_149 = 0;
										unk_0x58F441B90EA84D06();
										if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
										{
											Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
										}
										func_97();
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
										if (func_132())
										{
											if (Global_2543374 == 0)
											{
												if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
												{
													func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
										{
											func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_96();
										func_95(1);
									}
								}
								else if (Global_14393.f_1 != 9)
								{
									if (Global_16726 == 1)
									{
										if (Global_16725 == 0)
										{
											func_94();
										}
									}
									else if ((Global_2871 - Global_2870) > Global_2872)
									{
										if (func_93(2, Global_14361, 0))
										{
											if (func_92() && iLocal_126)
											{
											}
											else if (iLocal_126 == 0)
											{
												unk_0xFAEC088D28B1DE4A(0);
												unk_0x9F36E8A3D2A21276(iLocal_111);
												iLocal_142 = 0;
												if (Global_16725 == 0)
												{
													func_99();
													Global_16725 = 1;
													unk_0x393FC215FEC6D8F1(0, 1);
													iLocal_127 = 0;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													func_91(0, 0);
													func_95(0);
													iLocal_114 = 0;
													func_90();
													iLocal_141 = 0;
													func_88(0, 1);
													func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_100 == 0)
									{
										if (unk_0xA805B04DD97BE4E6())
										{
											func_87();
											iLocal_100 = 1;
										}
									}
									else if (!unk_0xA805B04DD97BE4E6())
									{
										func_87();
										iLocal_100 = 0;
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
										{
											func_87();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
									{
										func_87();
										iLocal_101 = 0;
									}
									if (Global_16725 == 1)
									{
										func_80();
									}
									else if (Global_14393.f_1 > 4)
									{
										if (iLocal_123 == 1 && iLocal_124 == 0)
										{
											func_76();
										}
										if (iLocal_123 == 0 && iLocal_124 == 1)
										{
											func_97();
											if (iLocal_135 == 1 || iLocal_135 == 0)
											{
												if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
												{
													if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
													{
														func_123(uLocal_139, "CLOSE_SHUTTER");
														iLocal_134 = unk_0x4F67E8ECA7D3F667();
														while (unk_0x4F67E8ECA7D3F667() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
														{
															unk_0x36CDD81627A6FCD2();
															func_103();
															func_75();
															unk_0xA8C44C13419634F2();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_132())
												{
													if (Global_2543374 == 0)
													{
														if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
														{
															func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
												{
													func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_103();
												unk_0x36CDD81627A6FCD2();
												iLocal_131 = 0;
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_126 = 0;
												func_98();
												iLocal_135 = 0;
												func_123(uLocal_139, "OPEN_SHUTTER");
											}
											func_96();
											func_95(1);
											func_74();
										}
									}
									if (iLocal_142 == 1)
									{
										func_71();
									}
									if (iLocal_128)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_127 = 1;
											iLocal_128 = 0;
											unk_0xF73FBE4845C43B5B(&Global_2263, 18);
											if (Global_16725 == 0)
											{
												func_88(1, 1);
											}
										}
									}
									if (iLocal_126 == 0)
									{
										if (iLocal_127 && Global_16725 == 0)
										{
											if ((iLocal_129 == 0 && iLocal_124 == 0) && Global_16728 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_75();
										}
									}
									else if (iLocal_123 == 0)
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
					if (Global_14393.f_1 > 3)
					{
						if (Global_16726 == 1)
						{
							if (Global_16725 == 0)
							{
								func_94();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_154 == 1)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_151, "CELL_CAM_FW_2", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 7)
				{
					if (unk_0x50732C31F5D806DF() || unk_0xD1CCC2A2639D325F())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x588D1C657C1F9299() || unk_0x88CFAE250D3E0C71())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0xB0FB6CFAA5A1C833())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_151, "", 0, -1, "", "", 1);
					}
				}
				if (iLocal_154 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_151, "CELL_CAM_CCW_2", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 5)
				{
					iVar0 = unk_0x8FE800E15B262DEA();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_151, "", 0, -1, "", "", 1);
							break;
						}
				}
				if (iLocal_154 == 0)
				{
				}
				if (iLocal_154 == 2 || iLocal_154 == 3)
				{
					if (unk_0xCCBB0BB9790E1F47(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_88(0, 1);
					}
					if (unk_0xCCBB0BB9790E1F47(2, 201))
					{
						iLocal_153 = 1;
					}
					if (iLocal_153 == 1)
					{
						if (unk_0x3249D2128D293FA5(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							iLocal_153 = 0;
							unk_0xCA63B88B9B65BFAC("Gallery");
							unk_0xF487AB0E544D54A9();
						}
					}
				}
				else if (iLocal_154 == 7)
				{
					if (unk_0x88CFAE250D3E0C71())
					{
						if (unk_0xCCBB0BB9790E1F47(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							iLocal_110 = 0;
						}
					}
					else if (unk_0xCCBB0BB9790E1F47(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_88(0, 1);
						iLocal_110 = 0;
					}
					if (!unk_0x88CFAE250D3E0C71())
					{
						if (unk_0xCCBB0BB9790E1F47(2, Global_14365))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							if (unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
							{
								iLocal_110 = 0;
							}
							else
							{
								iLocal_110 = 2;
							}
							iLocal_106 = unk_0x4F67E8ECA7D3F667();
							unk_0x3EE0B62B2FBD1DE6(1);
						}
					}
				}
				else if (unk_0xCCBB0BB9790E1F47(2, 201))
				{
					iLocal_152 = 0;
					iLocal_154 = 0;
					func_88(0, 1);
				}
			}
		}
		iLocal_107 = unk_0x4F67E8ECA7D3F667();
		if (func_3() || iLocal_129)
		{
			func_1(0);
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			Global_16725 = 0;
			Global_16726 = 0;
			Global_16728 = 0;
			unk_0x6215C0F9FFF76BAD(&uLocal_139);
			unk_0x6215C0F9FFF76BAD(&uLocal_140);
			unk_0xFAEC088D28B1DE4A(0);
			if (Global_14553 == 1)
			{
				unk_0xF73FBE4845C43B5B(&Global_2263, 17);
			}
			else
			{
				unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			}
			unk_0x393FC215FEC6D8F1(0, 1);
			unk_0x7FF75CD5C710457F(unk_0x217E9DC48139933D(), 1);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 3);
			unk_0x7D1D4A3602B6AD4E(&Global_2544648, 3);
			unk_0x6E6485C88690115F(15);
			Global_16729 = 1;
			unk_0x9F36E8A3D2A21276(iLocal_111);
			unk_0x80443F20AE28A765(iLocal_111);
			unk_0x58F441B90EA84D06();
			func_90();
			unk_0xC00A3E7BECAEA0C1(0);
			unk_0x375A706A5C2FD084(false);
			unk_0xA7699283C152C32E(1f);
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				unk_0x7FA9D4264D459354(unk_0x096275889B8E0EE0(), "Mood_Normal_1", 0);
				unk_0xC67675DEA886160C(unk_0x096275889B8E0EE0());
			}
			if (Global_2543374 > 0 && Global_2543374 < 13)
			{
				unk_0x4ACA10A91F66F1E2(sLocal_32[Global_2543374]);
			}
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 18);
			func_88(0, 1);
			if (func_130(0, 1, iLocal_63))
			{
				iLocal_63 = 0;
			}
			unk_0x5E8B6D17FF91CD59();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x8DFB66677CE05A7C(1);
		}
		else if (Global_14393.f_1 > 3)
		{
			unk_0x8DFB66677CE05A7C(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xA262E90CFCFB11BC();
	iVar1 = unk_0xBBCE897E81A3FFBC(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2544850 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_105 = unk_0xB28894CD7408BD0C(0);
	switch (iLocal_105)
	{
		case 0:
			iLocal_102 = 0;
			iLocal_108 = unk_0x0BC082995F0A4897();
			iLocal_109 = unk_0x61A55FF6EDD62646();
			if (iLocal_103 == 1)
			{
				if (iLocal_126 == 0)
				{
					if (unk_0x64BAE9BE701E6C19(uLocal_139))
					{
						if (func_132())
						{
							if (Global_2543374 == 0)
							{
								if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
								{
									func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
							{
								func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x64BAE9BE701E6C19(uLocal_139))
				{
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				}
				iLocal_103 = 0;
			}
			unk_0x58F441B90EA84D06();
			break;
		
		case 1:
			if (!unk_0x823BF7B1DF613A21())
			{
				unk_0xD96DD41977ECED45("CELL_SPINNER2");
				unk_0x9943ACD4E08F4EC8(1);
			}
			break;
		
		case 2:
			if (unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
			{
				iLocal_102 = 0;
				iLocal_108 = 0;
				iLocal_109 = 0;
			}
			else
			{
				Global_14393.f_1 = 3;
				Global_16729 = 1;
			}
			unk_0x58F441B90EA84D06();
			break;
	}
}

void func_5()
{
	if (func_93(2, Global_14362, 0))
	{
		func_1(0);
		if (unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
		{
			unk_0xFAEC088D28B1DE4A(0);
			unk_0x5AE11BC36633DE4E(0);
			func_100();
			iLocal_126 = 0;
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			}
			func_99();
			iLocal_135 = 1;
		}
		else if (func_9())
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2264, 14))
			{
				func_120("CELL_299", -1);
			}
			else
			{
				func_99();
				func_8();
			}
		}
		else
		{
			iLocal_152 = 1;
			func_88(1, 1);
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2263, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x36CDD81627A6FCD2();
			unk_0xA8C44C13419634F2();
			func_75();
			func_107();
			func_103();
		}
		unk_0xFAEC088D28B1DE4A(0);
		func_100();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_126 = 0;
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
		}
		func_98();
		func_99();
	}
	if (func_93(2, Global_14366, 0))
	{
		func_1(0);
		if (func_92() || unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
		{
		}
		else
		{
			unk_0xFAEC088D28B1DE4A(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_135 = 1;
			func_100();
			iLocal_126 = 0;
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			}
			func_99();
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
	{
		if (func_93(2, Global_14365, 0))
		{
			func_1(0);
			unk_0xFAEC088D28B1DE4A(0);
			unk_0xF1142E5D64B47802(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA8C44C13419634F2();
			unk_0x36CDD81627A6FCD2();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA8C44C13419634F2();
			unk_0x36CDD81627A6FCD2();
			unk_0xD45547D8396F002A();
			unk_0x614682E715ADBAAC();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 0;
			func_88(0, 1);
			Global_16725 = 1;
			unk_0x393FC215FEC6D8F1(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			unk_0xF73FBE4845C43B5B(&Global_2263, 9);
			iLocal_141 = 0;
			func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0xB906B139171B1845(-1, "Menu_Accept", &Global_14382, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x977FC0F30B11C478(5);
	}
}

void func_8()
{
	iLocal_149 = 1;
	Global_16730 = 1;
	unk_0x393FC215FEC6D8F1(0, 1);
}

int func_9()
{
	if (iLocal_106 == iLocal_107)
	{
		if (iLocal_104)
		{
			iLocal_104 = 1;
		}
	}
	if (Global_14393.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_108 == iLocal_109 || iLocal_108 > iLocal_109)
	{
		iLocal_154 = 1;
		iLocal_151 = 2;
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
	
	if (unk_0x3653C46DD33107D5(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_130)
	{
		func_66();
		func_62();
		func_61();
		fLocal_72 = unk_0x99AADEBBA803F827();
		fLocal_73 = unk_0xC4ABF536048998AA();
		if (iLocal_132 == 0)
		{
			if (unk_0x2503EB2EA811EC9A(2, iVar0) && !unk_0x2503EB2EA811EC9A(2, iVar1))
			{
				iLocal_132 = 1;
				func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(2, 179, 1), "CELL_287");
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 176, 1), "CELL_280");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_58();
				unk_0xF6EA2AC68E7C7293(uLocal_140, "SET_MAX_WIDTH");
				unk_0xBC38230AD29DBDD4(fLocal_76);
				unk_0xD4D85E4148B638AD();
				func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x2503EB2EA811EC9A(2, iVar0) || unk_0x2503EB2EA811EC9A(2, iVar1))
		{
			iLocal_132 = 0;
			func_98();
		}
		if (iLocal_133 == 0)
		{
			if (unk_0x2503EB2EA811EC9A(2, iVar1) && !unk_0x2503EB2EA811EC9A(2, iVar0))
			{
				iLocal_133 = 1;
				func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(2, 179, 1), "CELL_287");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 176, 1), "CELL_280");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(0, 177, 1), "CELL_281");
				}
				func_57();
				unk_0xF6EA2AC68E7C7293(uLocal_140, "SET_MAX_WIDTH");
				unk_0xBC38230AD29DBDD4(fLocal_76);
				unk_0xD4D85E4148B638AD();
				func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x2503EB2EA811EC9A(2, iVar1) || unk_0x2503EB2EA811EC9A(2, iVar0))
		{
			iLocal_133 = 0;
			func_98();
		}
	}
	else
	{
		unk_0xDDC74037BBBF2034(0, 2, 1);
		unk_0xDDC74037BBBF2034(0, 1, 1);
	}
	if (unk_0x29D1C165BCB09391(2))
	{
		func_98();
	}
	func_107();
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0x28AC5FC91EA70789(unk_0x096275889B8E0EE0(), 200, 1);
	}
	if (unk_0xCCBB0BB9790E1F47(2, 183))
	{
		unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
			{
				if (unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
				{
					unk_0x7D1D4A3602B6AD4E(&Global_2544648, 2);
					if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
					{
						func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xF73FBE4845C43B5B(&Global_2544648, 2);
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_130)
	{
		if (iLocal_131 == 1)
		{
			iLocal_131 = 0;
			unk_0xF6EA2AC68E7C7293(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x58279158C52AF361(0);
			func_56("CELL_FOCUS");
			unk_0x58279158C52AF361(1);
			unk_0xD4D85E4148B638AD();
		}
		if (!func_55(14))
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2544648, 10))
			{
				if ((Global_68245 == 0 && unk_0x8E34C953364A76DD(joaat("pi_menu")) > 0) && func_54())
				{
					unk_0xF6EA2AC68E7C7293(uLocal_139, "SET_FOCUS_LOCK");
					unk_0x58279158C52AF361(1);
					unk_0x164FB269C22AF51C("CELL_ACTTL");
					unk_0x54534D588C114163(unk_0xCFEDCCAD3C5BA90D(&Global_2545339));
					unk_0x5BB4D22B8B03A30B();
					unk_0x58279158C52AF361(0);
					unk_0xD4D85E4148B638AD();
					unk_0x7D1D4A3602B6AD4E(&Global_2544648, 10);
				}
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(Global_2544648, 10))
		{
			unk_0x7D1D4A3602B6AD4E(&Global_2544648, 10);
		}
		iLocal_65 = unk_0x4F67E8ECA7D3F667();
		if ((iLocal_65 - iLocal_64) > 1500)
		{
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				Local_69 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
				if (unk_0x0BE7F4E3CDBAFB28(Local_69, Local_66, 1) > 5f)
				{
					Global_14393.f_1 = 3;
					unk_0xFAEC088D28B1DE4A(0);
				}
				iLocal_64 = unk_0x4F67E8ECA7D3F667();
			}
		}
	}
	else if (iLocal_131)
	{
		if (!unk_0x2503EB2EA811EC9A(0, 182))
		{
			unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
			iLocal_131 = 0;
			unk_0xF6EA2AC68E7C7293(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x58279158C52AF361(0);
			func_56("CELL_FOCUS");
			unk_0x58279158C52AF361(1);
			unk_0xD4D85E4148B638AD();
		}
	}
	else if (unk_0x2503EB2EA811EC9A(0, 182))
	{
		unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
		iLocal_131 = 1;
		if (!func_55(14))
		{
			unk_0xF6EA2AC68E7C7293(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x58279158C52AF361(1);
			func_56("CELL_FOCUS");
			unk_0x58279158C52AF361(1);
			unk_0xD4D85E4148B638AD();
		}
	}
	if (func_132())
	{
		if (unk_0xCCBB0BB9790E1F47(2, 186))
		{
			if (iLocal_130)
			{
				iLocal_56++;
				if (iLocal_56 > 0 && iLocal_56 < 7)
				{
					if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
					{
						unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
						unk_0x7FA9D4264D459354(unk_0x096275889B8E0EE0(), "Mood_Normal_1", 0);
						unk_0xC67675DEA886160C(unk_0x096275889B8E0EE0());
						if (Global_14393 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x983DBD2F550D8434(unk_0x096275889B8E0EE0(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x983DBD2F550D8434(unk_0x096275889B8E0EE0(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_56 == 2 || iLocal_56 == 3) || iLocal_56 == 4) || iLocal_56 == 8) || iLocal_56 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_56 == 3)
										{
											unk_0x7FA9D4264D459354(unk_0x096275889B8E0EE0(), sLocal_47[iLocal_56], 0);
										}
									}
								}
								else
								{
									unk_0x7FA9D4264D459354(unk_0x096275889B8E0EE0(), sLocal_47[iLocal_56], 0);
								}
							}
							else
							{
								unk_0x7FA9D4264D459354(unk_0x096275889B8E0EE0(), sLocal_47[iLocal_56], 0);
							}
						}
						else
						{
							unk_0x7FA9D4264D459354(unk_0x096275889B8E0EE0(), sLocal_47[iLocal_56], 0);
						}
					}
				}
				if (iLocal_56 == 7 || iLocal_56 > 7)
				{
					iLocal_56 = 0;
				}
				if (iLocal_56 == 0)
				{
					if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
					{
						unk_0x7FA9D4264D459354(unk_0x096275889B8E0EE0(), "Mood_Normal_1", 0);
						unk_0xC67675DEA886160C(unk_0x096275889B8E0EE0());
						unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
					}
				}
			}
		}
		if (unk_0xCCBB0BB9790E1F47(2, 185))
		{
			if (iLocal_130)
			{
				if (bLocal_61 == 1)
				{
					unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
					if (iLocal_60 == 0)
					{
						iLocal_60 = 1;
						iLocal_59 = 1;
						if (unk_0xD3852F22AB713A1F(sLocal_18[Global_2543373], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xC00A3E7BECAEA0C1(1);
							unk_0x375A706A5C2FD084(true);
						}
					}
					else
					{
						iLocal_60 = 0;
						iLocal_59 = 0;
						unk_0xC00A3E7BECAEA0C1(0);
						unk_0x375A706A5C2FD084(false);
					}
				}
			}
			else if (bLocal_62 == 1)
			{
				if (iLocal_59 == 0)
				{
					iLocal_59 = 1;
					iLocal_60 = 1;
					unk_0xC00A3E7BECAEA0C1(1);
					unk_0x375A706A5C2FD084(true);
				}
				else
				{
					iLocal_59 = 0;
					iLocal_60 = 0;
					unk_0xC00A3E7BECAEA0C1(0);
					unk_0x375A706A5C2FD084(false);
				}
			}
		}
	}
	if (iLocal_58 == 1)
	{
		if (unk_0xCCBB0BB9790E1F47(0, 172))
		{
			if (func_132())
			{
				Global_2543374++;
				unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
			}
			if (Global_2543374 == 13)
			{
				func_95(0);
				unk_0xA7699283C152C32E(1f);
				unk_0x4ACA10A91F66F1E2(sLocal_32[(Global_2543374 - 1)]);
				Global_2543374 = 0;
				func_53();
				if (iLocal_46 == 1)
				{
					unk_0x7D1D4A3602B6AD4E(&Global_2544648, 2);
					iLocal_46 = 0;
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2543374 > 0 && Global_2543374 < 13)
			{
				iLocal_58 = 0;
				iLocal_57 = 0;
				unk_0xC1BA29DF5631B0F8(sLocal_32[Global_2543374], 0);
			}
		}
	}
	if (Global_2543374 > 0)
	{
		if (iLocal_58 == 0)
		{
			if (unk_0x54D6900929CCF162(sLocal_32[Global_2543374]))
			{
				iLocal_57 = 1;
				iLocal_58 = 1;
				if (!unk_0xC5B24AF209DE4AFD())
				{
					func_95(1);
				}
				if (iLocal_46 == 0)
				{
					if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
					{
						iLocal_46 = 1;
					}
				}
				unk_0xF73FBE4845C43B5B(&Global_2544648, 2);
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xA7699283C152C32E(0.25f);
				unk_0x63B02FF75F633209(sLocal_32[Global_2543374], 0);
			}
		}
		if (iLocal_57 == 1)
		{
			if (Global_2543374 == 1 || Global_2543374 == 3)
			{
			}
			if (Global_2543374 == 2 || Global_2543374 == 4)
			{
			}
		}
	}
	if (unk_0xCCBB0BB9790E1F47(0, 173))
	{
		if (func_132())
		{
			func_90();
			Global_2543373++;
			unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
		}
		if (Global_2543373 == 13)
		{
			Global_2543373 = 0;
		}
		if (Global_2543373 == 0)
		{
			if (func_132())
			{
				func_90();
			}
		}
		else
		{
			func_96();
		}
		func_52();
	}
	if (unk_0xA799AFD74BAFEA0F(0, 184))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && !unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
			{
				Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
				unk_0xB906B139171B1845(-1, "Menu_Navigate", &Global_14382, 1);
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_123(uLocal_139, "CLOSE_SHUTTER");
				iLocal_134 = unk_0x4F67E8ECA7D3F667();
				while (unk_0x4F67E8ECA7D3F667() < (iLocal_134 + iLocal_138) && Global_14393.f_1 > 3)
				{
					unk_0x36CDD81627A6FCD2();
					func_103();
					func_75();
					unk_0xA8C44C13419634F2();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_130 == 0)
				{
					unk_0x9F36E8A3D2A21276(iLocal_111);
					iLocal_130 = 1;
					func_51(1);
					func_50();
					unk_0xF73FBE4845C43B5B(&Global_2265, 3);
					iLocal_64 = unk_0x4F67E8ECA7D3F667();
				}
				else
				{
					iLocal_132 = 0;
					iLocal_133 = 0;
					func_51(0);
					iLocal_130 = 0;
					unk_0x7D1D4A3602B6AD4E(&Global_2265, 3);
				}
				iLocal_134 = unk_0x4F67E8ECA7D3F667();
				while (unk_0x4F67E8ECA7D3F667() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
				{
					unk_0x36CDD81627A6FCD2();
					func_103();
					func_75();
					unk_0xA8C44C13419634F2();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_123(uLocal_139, "OPEN_SHUTTER");
				if (func_132())
				{
					if (Global_2543374 == 0)
					{
						if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
						{
							func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
				{
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_103();
				unk_0x36CDD81627A6FCD2();
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_296", 16);
					func_49();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_130 == 0)
	{
		if (iLocal_112 == 0)
		{
			if (unk_0xCCBB0BB9790E1F47(0, 40) || unk_0xCCBB0BB9790E1F47(0, 41))
			{
				fLocal_113 = unk_0xB4132CA1B0EE1365();
				if (fLocal_113 > 1f && fLocal_113 < 4.5f)
				{
					if (unk_0x54E8BDC138905351(iLocal_111))
					{
						unk_0xB906B139171B1845(iLocal_111, "Camera_Zoom", &Global_14382, 1);
					}
				}
				else
				{
					unk_0x9F36E8A3D2A21276(iLocal_111);
				}
				iLocal_112 = 1;
			}
		}
		else if (unk_0x2503EB2EA811EC9A(0, 40) || unk_0x2503EB2EA811EC9A(0, 41))
		{
			fLocal_113 = unk_0xB4132CA1B0EE1365();
			if (fLocal_113 > 1f && fLocal_113 < 4.5f)
			{
				if (unk_0x54E8BDC138905351(iLocal_111))
				{
					unk_0xB906B139171B1845(iLocal_111, "Camera_Zoom", &Global_14382, 1);
				}
			}
			else
			{
				unk_0x9F36E8A3D2A21276(iLocal_111);
			}
		}
		else
		{
			unk_0x9F36E8A3D2A21276(iLocal_111);
		}
	}
	if (func_93(2, Global_14362, 0))
	{
		fLocal_74 = unk_0x99AADEBBA803F827();
		fLocal_75 = unk_0xC4ABF536048998AA();
		unk_0xF1142E5D64B47802(0, 0);
		unk_0xF73FBE4845C43B5B(&Global_2263, 21);
		unk_0x9F36E8A3D2A21276(iLocal_111);
		iLocal_126 = 1;
		func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_139, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xB906B139171B1845(-1, "Camera_Shoot", &Global_14382, 1);
		func_123(uLocal_139, "CLOSE_SHUTTER");
		Local_83 = { -90.3f, 0f, 90f };
		unk_0x8B04C3463BAA2E87(Local_83, 0);
		if (!func_132())
		{
			func_90();
		}
		Global_16728 = 1;
		unk_0x393FC215FEC6D8F1(0, 1);
		while (Global_16727 < 6 && Global_14393.f_1 > 3)
		{
			unk_0x36CDD81627A6FCD2();
			func_103();
			func_75();
			func_107();
			unk_0xA8C44C13419634F2();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA6216469A69F3068(0, 0);
		if (Global_14335)
		{
			func_1(1);
		}
		iLocal_134 = unk_0x4F67E8ECA7D3F667();
		while (unk_0x4F67E8ECA7D3F667() < (iLocal_134 + iLocal_137) && Global_14393.f_1 > 3)
		{
			unk_0x36CDD81627A6FCD2();
			func_103();
			func_75();
			unk_0xA8C44C13419634F2();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_123(uLocal_139, "OPEN_SHUTTER");
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 21);
		func_98();
		if (Global_14393.f_1 > 3)
		{
			if (Global_68245)
			{
				func_20(1074, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x6FE662419D4465F7(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x6FE662419D4465F7(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x6FE662419D4465F7(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_95(0);
		}
		func_103();
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
	{
		if (func_93(2, Global_14365, 0))
		{
			unk_0xF1142E5D64B47802(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA8C44C13419634F2();
			unk_0x36CDD81627A6FCD2();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA8C44C13419634F2();
			unk_0x36CDD81627A6FCD2();
			unk_0xD45547D8396F002A();
			unk_0x614682E715ADBAAC();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 1;
			Global_16725 = 1;
			unk_0x393FC215FEC6D8F1(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			unk_0xF73FBE4845C43B5B(&Global_2263, 9);
			unk_0xFAEC088D28B1DE4A(0);
			iLocal_141 = 0;
			func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_15(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_14(unk_0x096275889B8E0EE0());
			if (func_13(iVar0) && (!func_55(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
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
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_2435149[iVar0] = iParam0;
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435149[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_18(int iParam0, var uParam1)
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	Global_14330 = { Global_14346[Global_14338 /*3*/] };
	func_88(0, 1);
	func_91(0, 0);
	func_95(0);
	iLocal_114 = 0;
	func_90();
	if (!unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
	{
		if (unk_0xC23931AA79BE8893() == 0)
		{
			if (unk_0x50732C31F5D806DF())
			{
				if (iLocal_116 == 0)
				{
					iLocal_116 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1335551[func_25(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1335557[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1335563[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1335569[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1335527[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1335533[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1335539[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1335545[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1335503[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335509[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335515[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335521[func_25(uParam2)] = iParam1;
			break;
		
		case 745:
			Global_1335575[func_25(uParam2)] = iParam1;
			break;
		
		case 746:
			Global_1335581[func_25(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_1335587[func_25(uParam2)] = iParam1;
			break;
		
		case 748:
			Global_1335593[func_25(uParam2)] = iParam1;
			break;
		
		case 1290:
			Global_1335599[func_25(uParam2)] = iParam1;
			break;
		
		case 627:
			Global_1335605[func_25(uParam2)] = iParam1;
			break;
		
		case 1265:
			Global_1335611[func_25(uParam2)] = iParam1;
			break;
		
		case 1862:
			Global_2476002[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2251:
			Global_2476002[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335617[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1335623[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1335629[func_25(uParam2)] = iParam1;
			break;
		
		case 1223:
			Global_1335635[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_25(uParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312737;
}

void func_27()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(0, 177, 1), "CELL_281");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 176, 1), "CELL_280");
		if (iLocal_130)
		{
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) || unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
				{
					if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_68245 == 0 && unk_0x8E34C953364A76DD(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 7f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) || unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
			{
				if (!unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xF800E35ED8511D66(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xF800E35ED8511D66(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(0, 182, 1), "CELL_FOCUS");
						}
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xF800E35ED8511D66(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xF800E35ED8511D66(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(0, 182, 1), "CELL_FOCUS");
						}
						func_59(uLocal_140, "SET_DATA_SLOT", 9f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xF6EA2AC68E7C7293(uLocal_140, "SET_MAX_WIDTH");
		unk_0xBC38230AD29DBDD4(fLocal_76);
		unk_0xD4D85E4148B638AD();
		func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xF800E35ED8511D66(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x03A753E2C8458335())
	{
		if (func_44(Global_2476507, Global_2476508))
		{
			if (iParam0 == 0 || !func_30(Global_2476507, Global_2476508, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x096275889B8E0EE0(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	uVar0 = 2;
	uVar3 = 2;
	uVar6 = 2;
	if (iParam1 == 0)
	{
		iVar12 = 3;
	}
	else if (bParam3)
	{
		iVar12 = 1;
	}
	else if (bParam4)
	{
		iVar12 = 2;
	}
	else
	{
		iVar12 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar3, &uVar6, iVar12, bParam5);
	if (!unk_0x7D5B1F88E7504BBA(iParam0))
	{
		if (unk_0xDA76A9F39210D365(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar9 = func_38(iParam0);
			if (!iVar9 == -1)
			{
				if (func_37(&uVar0, iVar9))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar10 = func_36(iParam0);
			if (!iVar10 == -1)
			{
				if (func_34(&uVar3, iVar10))
				{
					return 1;
				}
			}
		}
		if (unk_0x03A753E2C8458335())
		{
			iVar11 = func_33(iParam0);
			if (!iVar11 == 0)
			{
				if (func_32(&uVar6, iVar11))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	return unk_0x7F42B7520C9EB853(iParam0, 1);
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	return unk_0x983DBD2F550D8434(iParam0, 0);
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	return unk_0x983DBD2F550D8434(iParam0, 0);
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 5, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 7, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 33, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 10:
					func_40(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 4, 1);
						func_43(uParam3, 6, 1);
						func_43(uParam3, 10, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 37, 1);
						func_43(uParam3, 39, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 9, 1);
						func_41(uParam2, 10, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 36, 1);
						func_41(uParam2, 38, 1);
					}
					func_40(uParam4, 2, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 19, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_43(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_40(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 8, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 7, 1);
						func_43(uParam3, 0, 1);
						func_43(uParam3, 12, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 15, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 17, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 21, 1);
						func_43(uParam3, 25, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 30, 1);
						func_43(uParam3, 31, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 39, 1);
						func_43(uParam3, 37, 1);
						func_41(uParam2, 0, 1);
						func_41(uParam2, 2, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 7, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 11, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 15, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 17, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 19, 1);
						func_41(uParam2, 20, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 22, 1);
						func_41(uParam2, 24, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 30, 1);
						func_41(uParam2, 31, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 38, 1);
						func_41(uParam2, 36, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							break;
						
						case 1:
							func_43(uParam3, 4, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 31, 1);
							break;
					}
					break;
				
				case 5:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 43, 1);
							func_40(uParam4, 29, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							break;
					}
					break;
				
				case 21:
					switch (iParam5)
					{
						case 0:
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
					}
					break;
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 19, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 4, 1);
							break;
						
						case 1:
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 37, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 36, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 1, 1);
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 5, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 1, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 5, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 12, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 14, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 23, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 29, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 33, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 32, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
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
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 21, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 22, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_41(var uParam0, int iParam1, bool bParam2)
{
	func_42(uParam0, iParam1, bParam2);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	func_42(uParam0, iParam1, bParam2);
}

int func_44(int iParam0, int iParam1)
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

void func_45(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xF800E35ED8511D66(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xF800E35ED8511D66(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(0, 183, 1), "CELL_GRID");
	func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_61)
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 9f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_55(14))
	{
		if ((Global_68245 == 0 && unk_0x8E34C953364A76DD(joaat("pi_menu")) > 0) && func_54())
		{
			unk_0xF6EA2AC68E7C7293(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x58279158C52AF361(1);
			unk_0x164FB269C22AF51C("CELL_ACTTL");
			unk_0x54534D588C114163(unk_0xCFEDCCAD3C5BA90D(&Global_2545339));
			unk_0x5BB4D22B8B03A30B();
			unk_0x58279158C52AF361(0);
			unk_0xD4D85E4148B638AD();
		}
	}
}

void func_48(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xF800E35ED8511D66(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 177, 1), "CELL_281");
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(2, 179, 1), "CELL_287");
		if (iLocal_130)
		{
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) || unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
				{
					if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_68245 == 0 && unk_0x8E34C953364A76DD(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 7f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) || unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
			{
				if (!unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xF800E35ED8511D66(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0()) == 2)
			{
				if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xF800E35ED8511D66(2, 183, 1), "CELL_GRID");
				func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
				func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xF800E35ED8511D66(0, 39, 1), "CELL_284");
				if (func_132())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_62)
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(0, 182, 1), "CELL_FOCUS");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 9f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(4f);
						func_45(5f);
						func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xF800E35ED8511D66(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xF6EA2AC68E7C7293(uLocal_140, "SET_MAX_WIDTH");
		unk_0xBC38230AD29DBDD4(fLocal_76);
		unk_0xD4D85E4148B638AD();
		func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_50()
{
	if (iLocal_130)
	{
		unk_0xFB760AF4F537B8BF(fLocal_72, 1065353216);
		unk_0x5D1EB123EAC5D071(fLocal_73);
	}
}

void func_51(int iParam0)
{
	if (Global_1602437.f_69970 == 1)
	{
	}
	else if (Global_1602437.f_69971 == 1)
	{
	}
	else
	{
		unk_0xE2E9C13AD1B547E6(iParam0);
	}
}

void func_52()
{
	if (iLocal_60 == 1)
	{
		if (unk_0xD3852F22AB713A1F(sLocal_18[Global_2543373], "phone_cam12DUMMY"))
		{
			unk_0xC00A3E7BECAEA0C1(0);
			unk_0x375A706A5C2FD084(false);
		}
		else
		{
			unk_0xC00A3E7BECAEA0C1(1);
			unk_0x375A706A5C2FD084(true);
		}
	}
}

void func_53()
{
	func_124(uLocal_139, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_132())
	{
		unk_0xFA08722A5EA82DA7("phone_cam");
	}
}

int func_54()
{
	if (func_55(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if ((unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/] || unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/]) || unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
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

bool func_55(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_56(char* sParam0)
{
	unk_0x164FB269C22AF51C(sParam0);
	unk_0x5BB4D22B8B03A30B();
}

void func_57()
{
	if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x3653C46DD33107D5(2))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(0, 30, 1), "CELL_RT_RSTICK");
		func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xDE6887C7BB8A503D(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(0, 1, 1), "CELL_RT_RSTICK");
		func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xDE6887C7BB8A503D(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_58()
{
	if (unk_0x3653C46DD33107D5(2) || unk_0x88CFAE250D3E0C71())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xF800E35ED8511D66(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xDE6887C7BB8A503D(0, 1, 1), "CELL_LT_RSTICK");
	if (func_55(14))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xF800E35ED8511D66(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xF800E35ED8511D66(0, 39, 1), "CELL_LT_LSTICKZ");
		func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xF800E35ED8511D66(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_59(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xF6EA2AC68E7C7293(uParam0, sParam1);
	unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x2CF12F9ACF18F048(uParam3))
	{
		func_60(uParam3);
	}
	if (!unk_0x2CF12F9ACF18F048(sParam4))
	{
		func_56(sParam4);
	}
	unk_0xD4D85E4148B638AD();
}

void func_60(var uParam0)
{
	unk_0x3FB5104DF4233F1D(uParam0);
}

void func_61()
{
	if (Global_68245)
	{
		switch (Global_16809)
		{
			case 0:
				if (unk_0x3653C46DD33107D5(2))
				{
					func_120("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_120("CELL_CAM_SELFIE_0", -1);
				}
				Global_16809++;
				break;
			
			case 1:
				if (!unk_0xA805B04DD97BE4E6())
				{
					if (unk_0x3653C46DD33107D5(2))
					{
						func_120("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_120("CELL_CAM_SELFIE_1", -1);
					}
					Global_16809++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16808)
		{
			case 0:
				if (unk_0x3653C46DD33107D5(2))
				{
					func_120("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_120("CELL_CAM_SELFIE_0", -1);
				}
				Global_16808++;
				break;
			
			case 1:
				if (!unk_0xA805B04DD97BE4E6())
				{
					if (unk_0x3653C46DD33107D5(2))
					{
						func_120("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_120("CELL_CAM_SELFIE_1", -1);
					}
					Global_16808++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_62()
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
	
	if (unk_0x3653C46DD33107D5(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x2503EB2EA811EC9A(2, iVar10) && !unk_0x2503EB2EA811EC9A(2, iVar9))
	{
		unk_0x562F5D788AF3FA80(0, 2, 1);
		unk_0x562F5D788AF3FA80(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 2)) * 127;
		if (unk_0x3653C46DD33107D5(2))
		{
			if (unk_0x0C214D5B8A38C828(iVar0) > 28 || unk_0x0C214D5B8A38C828(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			}
		}
		else if (unk_0x0C214D5B8A38C828(iVar2) > 28 || unk_0x0C214D5B8A38C828(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
		}
		if (unk_0x3653C46DD33107D5(2))
		{
			fVar7 = unk_0x43701D9ABA44A43F(0, 290);
			fVar8 = unk_0x43701D9ABA44A43F(0, 291);
			if (unk_0x7E47E3291155DF3B())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x0C214D5B8A38C828(iVar0) > 28 || unk_0x0C214D5B8A38C828(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_162);
		}
		func_65(fVar5);
		func_64(fVar6);
		func_63(fVar4);
	}
	else if (!unk_0x2503EB2EA811EC9A(2, iVar9))
	{
		unk_0xDDC74037BBBF2034(0, 2, 1);
		unk_0xDDC74037BBBF2034(0, 1, 1);
	}
}

void func_63(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < -1f)
	{
		fLocal_159 = -1f;
	}
	unk_0xF5544AA3CC440423(fLocal_159);
}

void func_64(float fParam0)
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
	unk_0xEC94149ED2DC034B(fLocal_160);
}

void func_65(float fParam0)
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
	unk_0x70277EDD9EABE9A7(fLocal_161);
}

void func_66()
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
	
	if (unk_0x3653C46DD33107D5(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x2503EB2EA811EC9A(2, iVar10))
		{
			if (unk_0xCCBB0BB9790E1F47(2, 178))
			{
				unk_0x1C36B8A7C85226C3(0.5f);
				unk_0xCDA919B58C714AE7(0.85f);
				unk_0xCD6A6972C7099E65(0.5f);
				unk_0xD9784B271E11D22F(-0.25f);
				fLocal_155 = 0.5f;
				fLocal_156 = 0.85f;
				fLocal_157 = 0.5f;
				fLocal_158 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x2503EB2EA811EC9A(2, iVar10) && !unk_0x2503EB2EA811EC9A(2, iVar11))
	{
		if (unk_0xCCBB0BB9790E1F47(2, 178))
		{
			unk_0x1C36B8A7C85226C3(0.5f);
			unk_0xCDA919B58C714AE7(0.85f);
			unk_0xCD6A6972C7099E65(0.5f);
			unk_0xD9784B271E11D22F(-0.25f);
			fLocal_155 = 0.5f;
			fLocal_156 = 0.85f;
			fLocal_157 = 0.5f;
			fLocal_158 = -0.25f;
		}
		unk_0x562F5D788AF3FA80(0, 2, 1);
		unk_0x562F5D788AF3FA80(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 2)) * 127;
		if (unk_0x3653C46DD33107D5(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 39)) * 127;
			fVar8 = unk_0x43701D9ABA44A43F(0, 290);
			fVar9 = unk_0x43701D9ABA44A43F(0, 291);
			if (unk_0x7E47E3291155DF3B())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x0C214D5B8A38C828(iVar2) > 15 || unk_0x0C214D5B8A38C828(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0x0C214D5B8A38C828(iVar0) > 28 || unk_0x0C214D5B8A38C828(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		func_70(fVar6);
		func_69(fVar7);
		func_68(fVar4);
		if (!func_55(14))
		{
			func_67(fVar5);
		}
	}
	else if (!unk_0x3BFD60A58E503C0D(2, iVar11))
	{
		unk_0xDDC74037BBBF2034(0, 2, 1);
		unk_0xDDC74037BBBF2034(0, 1, 1);
	}
	if (!unk_0x3BFD60A58E503C0D(2, iVar10) && !unk_0x3BFD60A58E503C0D(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x43701D9ABA44A43F(0, 293)) * 127;
		if (unk_0x0C214D5B8A38C828(iVar2) > 28 || unk_0x0C214D5B8A38C828(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0x0C214D5B8A38C828(iVar0) > 28 || unk_0x0C214D5B8A38C828(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		if (!func_55(14))
		{
			func_67(fVar5);
		}
	}
}

void func_67(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 1f)
	{
		fLocal_157 = 1f;
	}
	else if (fLocal_157 < 0f)
	{
		fLocal_157 = 0f;
	}
	unk_0xCD6A6972C7099E65(fLocal_157);
}

void func_68(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1f)
	{
		fLocal_158 = 1f;
	}
	else if (fLocal_158 < -1f)
	{
		fLocal_158 = -1f;
	}
	unk_0xD9784B271E11D22F(fLocal_158);
}

void func_69(float fParam0)
{
	fLocal_156 = (fLocal_156 + fParam0);
	if (fLocal_156 > 1.5f)
	{
		fLocal_156 = 1.5f;
	}
	else if (fLocal_156 < 0.5f)
	{
		fLocal_156 = 0.5f;
	}
	unk_0xCDA919B58C714AE7(fLocal_156);
}

void func_70(float fParam0)
{
	fLocal_155 = (fLocal_155 + fParam0);
	if (fLocal_155 > 2f)
	{
		fLocal_155 = 2f;
	}
	else if (fLocal_155 < -1.7f)
	{
		fLocal_155 = -1.7f;
	}
	unk_0x1C36B8A7C85226C3(fLocal_155);
}

void func_71()
{
	if (Global_68505 || Global_68506)
	{
		return;
	}
	if (iLocal_123 == 0)
	{
		if (!iLocal_149)
		{
			if (Global_1602437.f_69970 == 0 && Global_1602437.f_69971 == 0)
			{
				unk_0x2D8953D6CEBE69D2(uLocal_140, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_126 == 0)
	{
		if (Global_14335)
		{
			if (Global_14551)
			{
				if (iLocal_149 == 0)
				{
					if (Global_14393.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_73(255, 255, 255, 255);
			func_72(0.059f, 0.644f, "CELL_284", 0);
			func_73(255, 255, 255, 255);
			func_72(0.165f, 0.644f, "CELL_285", 0);
			func_73(255, 255, 255, 255);
			func_72(0.275f, 0.75f, "CELL_280", 0);
			func_73(255, 255, 255, 255);
			func_72(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14335)
	{
	}
	else
	{
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.75f, "CELL_287", 0);
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.79f, "CELL_286", 0);
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_72(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x44507FCF2678B557(sParam2);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, iParam3);
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x4170B650590B3B00(0.4f, 0.4f);
	unk_0x1BE39DBAA7263CA5(0, 0, 0, 0, 0);
	unk_0x44569BAFDAA644BF(1, 0, 0, 0, 205);
	unk_0x7BF6B00A0E7F5C36(1);
	unk_0x031ABF27ACAA1595(0);
	unk_0x1844BFD606087D68(iParam0, iParam1, iParam2, iParam3);
}

void func_74()
{
	unk_0xFB760AF4F537B8BF(fLocal_74, 1065353216);
	unk_0x5D1EB123EAC5D071(fLocal_75);
}

void func_75()
{
	unk_0x562F5D788AF3FA80(0, 25, 1);
	unk_0x562F5D788AF3FA80(0, 44, 1);
	unk_0x562F5D788AF3FA80(0, 3, 1);
	unk_0x562F5D788AF3FA80(0, 4, 1);
	unk_0x562F5D788AF3FA80(0, 5, 1);
	unk_0x562F5D788AF3FA80(0, 6, 1);
	unk_0x562F5D788AF3FA80(0, 1, 1);
	unk_0x562F5D788AF3FA80(0, 2, 1);
	unk_0x562F5D788AF3FA80(0, 39, 1);
	unk_0x562F5D788AF3FA80(0, 47, 1);
	unk_0x562F5D788AF3FA80(0, 56, 1);
}

void func_76()
{
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (Global_14335)
	{
		if (func_79())
		{
			unk_0xA5D9670641C54F6B(&Local_92);
			Local_86 = { Local_92 };
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
		}
		func_1(1);
		if (iLocal_120)
		{
			Local_80.f_0 = (Local_80.f_0 + 12f);
		}
		if (Local_80.f_0 > Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
		{
			Local_80.f_0 = Local_86.f_0;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_80.f_1 = (Local_80.f_1 - 6f);
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_2265, 4))
		{
			if (Local_80.f_1 < (Local_86.f_1 + 15f) || Local_80.f_1 == (Local_86.f_1 + 15f))
			{
				Local_80.f_1 = (Local_86.f_1 + 15f);
				iLocal_121 = 0;
			}
		}
		else if (Local_80.f_1 < (Local_86.f_1 + 10f) || Local_80.f_1 == (Local_86.f_1 + 10f))
		{
			Local_80.f_1 = (Local_86.f_1 + 10f);
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_80.f_2 = (Local_80.f_2 - 10f);
		}
		if (Local_80.f_2 < Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
		{
			Local_80.f_2 = Local_86.f_2;
			iLocal_122 = 0;
		}
		if (func_79() == 0)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2265, 4))
			{
				Local_86.f_1 = (Local_86.f_1 + 15f);
			}
			else
			{
				Local_86.f_1 = (Local_86.f_1 + 10f);
			}
			Local_86.f_0 = (Local_86.f_0 - 14f);
		}
		else
		{
			Local_86 = { Global_14339[Global_14338 /*3*/] };
		}
		Local_80 = { Local_86 };
		iLocal_122 = 0;
		iLocal_121 = 0;
		iLocal_120 = 0;
		unk_0xD191BA2C5A7D3C46(Local_80);
		if ((iLocal_120 == 0 && iLocal_121 == 0) && iLocal_122 == 0)
		{
			iLocal_123 = 0;
			Local_83 = { -90.3f, 0f, 90f };
			unk_0x8B04C3463BAA2E87(Local_83, 0);
			if (!unk_0x4ED6CFDFE8D4131A(Global_2263, 22))
			{
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_77();
				}
				iLocal_99 = 2;
			}
		}
	}
}

void func_77()
{
	func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(2, 178, 1), "CELL_277");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xF6EA2AC68E7C7293(uLocal_140, "SET_MAX_WIDTH");
	unk_0xBC38230AD29DBDD4(fLocal_76);
	unk_0xD4D85E4148B638AD();
	func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_78()
{
	func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(2, 179, 1), "CELL_287");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xF800E35ED8511D66(2, 179, 1), "CELL_287");
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xF800E35ED8511D66(2, 178, 1), "CELL_277");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xF800E35ED8511D66(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xF6EA2AC68E7C7293(uLocal_140, "SET_MAX_WIDTH");
	unk_0xBC38230AD29DBDD4(fLocal_76);
	unk_0xD4D85E4148B638AD();
	func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
					{
						if (Global_15692 != 2)
						{
						}
					}
				}
			}
		}
		if (func_55(14))
		{
			return 0;
		}
		if (unk_0x6CA7C07CB3ECF0BA(unk_0x096275889B8E0EE0(), 0))
		{
			return 0;
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (!unk_0xA30D7FEC759B7B10())
			{
				if (unk_0xDDE5C125AC446723(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0()) || unk_0x9F26B8DC698D83E2(unk_0x096275889B8E0EE0())) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xA5F527ED186B98BE(unk_0x096275889B8E0EE0()))
		{
			return 0;
		}
		if (Global_96401)
		{
			return 0;
		}
	}
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xA262E90CFCFB11BC();
	iVar1 = unk_0xBBCE897E81A3FFBC(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA30D7FEC759B7B10()))
	{
		iVar2 = 1;
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				iVar3 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
				if (((((((unk_0x7331BD1F2125CC77(unk_0xDA76A9F39210D365(iVar3)) || unk_0x2BA0AE672835A516(unk_0xDA76A9F39210D365(iVar3))) || unk_0x7E9B1540150314F1(unk_0xDA76A9F39210D365(iVar3))) || unk_0xDA76A9F39210D365(iVar3) == joaat("seashark")) || unk_0xDA76A9F39210D365(iVar3) == joaat("seashark2")) || unk_0xDA76A9F39210D365(iVar3) == joaat("rhino")) || unk_0xDA76A9F39210D365(iVar3) == joaat("submersible")) || unk_0xDA76A9F39210D365(iVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2544850 || iVar2 == 1)
	{
		if (unk_0x8E34C953364A76DD(joaat("apptrackify")) > 0 || Global_97353.f_12305.f_89)
		{
			if (unk_0x8E34C953364A76DD(joaat("michael2")) > 0)
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

void func_80()
{
	unk_0x562F5D788AF3FA80(0, 47, 1);
	unk_0xDA067FC477B3E571(0, Global_14363);
	Local_83 = { Global_14353 };
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (func_79())
	{
		unk_0xD984904601D69712(&Local_89, 0);
		Local_83 = { Local_89 };
		unk_0xA5D9670641C54F6B(&Local_92);
		Local_86 = { Local_92 };
		iLocal_117 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
	}
	if (Global_14335)
	{
		func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_51(0);
		iLocal_130 = 0;
		if (unk_0x4ED6CFDFE8D4131A(Global_2263, 30))
		{
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			func_81();
		}
		if (iLocal_120)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
			{
				Local_80.f_0 = (Local_80.f_0 + 2f);
			}
			else
			{
				Local_80.f_0 = (Local_80.f_0 + 12f);
			}
		}
		if (Local_80.f_0 > Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
		{
			Local_80.f_0 = Local_86.f_0;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_80.f_1 = (Local_80.f_1 - 6f);
		}
		if (Local_80.f_1 < Local_86.f_1 || Local_80.f_1 == Local_86.f_1)
		{
			Local_80.f_1 = Local_86.f_1;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_80.f_2 = (Local_80.f_2 - 10f);
		}
		if (Local_80.f_2 < Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
		{
			Local_80.f_2 = Local_86.f_2;
			iLocal_122 = 0;
		}
		if (iLocal_122 == 0)
		{
			if (iLocal_117)
			{
				Local_77.f_0 = (Local_77.f_0 + 1f);
			}
			if (Local_77.f_0 > Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
			{
				Local_77.f_0 = Local_83.f_0;
				iLocal_117 = 0;
			}
			if (iLocal_118)
			{
				Local_77.f_1 = (Local_77.f_1 - 2f);
			}
			if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
			{
				Local_77.f_1 = Local_83.f_1;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_77.f_2 = (Local_77.f_2 - 14f);
			}
			if (Local_77.f_2 < Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
			{
				Local_77.f_2 = Local_83.f_2;
				iLocal_119 = 0;
			}
		}
		if (iLocal_125)
		{
			Local_77 = { Local_83 };
			Local_80 = { Local_86 };
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			if (func_79() == 0)
			{
				unk_0x8B04C3463BAA2E87(Local_77, 0);
				unk_0xD191BA2C5A7D3C46(Local_80);
			}
			func_88(0, 1);
		}
		else if (func_79() == 0)
		{
			unk_0x8B04C3463BAA2E87(Local_77, 0);
			unk_0xD191BA2C5A7D3C46(Local_80);
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_81();
		}
	}
	else
	{
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 + 1f);
		}
		if (Local_77.f_0 > Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 - 2f);
		}
		if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 - 7f);
		}
		if (Local_77.f_2 < Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			iLocal_119 = 0;
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_81();
		}
	}
	unk_0x8B04C3463BAA2E87(Local_77, 0);
}

void func_81()
{
	func_1(0);
	if (func_79() == 0)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_2263, 30))
		{
			unk_0xD191BA2C5A7D3C46(Global_14339[Global_14338 /*3*/]);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14346[Global_14338 /*3*/]);
		}
		Local_77 = { Local_83 };
		unk_0x8B04C3463BAA2E87(Local_77, 0);
	}
	Global_16725 = 0;
	func_91(0, 0);
	func_95(0);
	iLocal_114 = 0;
	func_90();
	Global_14380 = 1;
	Global_16728 = 0;
	if (Global_14393.f_1 > 4)
	{
		Global_14393.f_1 = 6;
		Global_14371 = 1;
		func_82();
	}
	if (unk_0x64BAE9BE701E6C19(uLocal_139))
	{
		func_123(uLocal_139, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0xA8C44C13419634F2();
	unk_0x6215C0F9FFF76BAD(&uLocal_140);
	unk_0x6215C0F9FFF76BAD(&uLocal_139);
	if (Global_14553 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 17);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
	}
	unk_0x7D1D4A3602B6AD4E(&Global_2263, 18);
	unk_0x7D1D4A3602B6AD4E(&Global_2263, 21);
	unk_0x393FC215FEC6D8F1(0, 1);
	unk_0x7D1D4A3602B6AD4E(&Global_2265, 3);
	unk_0x7D1D4A3602B6AD4E(&Global_2544648, 3);
	unk_0xFAEC088D28B1DE4A(0);
	unk_0x7FF75CD5C710457F(unk_0x217E9DC48139933D(), 1);
	unk_0x6E6485C88690115F(15);
	Global_16729 = 1;
	unk_0x9F36E8A3D2A21276(iLocal_111);
	unk_0x80443F20AE28A765(iLocal_111);
	unk_0x58F441B90EA84D06();
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0x7FA9D4264D459354(unk_0x096275889B8E0EE0(), "Mood_Normal_1", 0);
		unk_0xC67675DEA886160C(unk_0x096275889B8E0EE0());
	}
	func_90();
	unk_0xC00A3E7BECAEA0C1(0);
	unk_0x375A706A5C2FD084(false);
	unk_0xA7699283C152C32E(1f);
	if (Global_2543374 > 0 && Global_2543374 < 13)
	{
		unk_0x4ACA10A91F66F1E2(sLocal_32[Global_2543374]);
	}
	func_88(0, 1);
	if (func_130(0, 1, iLocal_63))
	{
		iLocal_63 = 0;
	}
	unk_0x5E8B6D17FF91CD59();
}

void func_82()
{
	struct<3> Var0;
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!unk_0x64BAE9BE701E6C19(Global_14374))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_86(Global_2868);
			if (Global_2868 == 1)
			{
				func_124(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				func_124(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			}
			else if (Global_68245)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF73FBE4845C43B5B(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_85(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				func_84();
				func_124(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97353.f_12305[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
					unk_0xA734310215BCF528(4);
					unk_0xA734310215BCF528(0);
					unk_0xA734310215BCF528(2);
					unk_0x164FB269C22AF51C("CELL_CONDFON");
					unk_0x54534D588C114163(&Global_15707);
					unk_0x5BB4D22B8B03A30B();
					func_56("CELL_300");
					func_56("CELL_217");
					func_56("CELL_217");
					unk_0xD4D85E4148B638AD();
				}
				else if (Global_97353.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97353.f_29774[Global_1578 /*29*/].f_3), &(Global_97353.f_29774[Global_1578 /*29*/].f_7), "CELL_217", &(Global_97353.f_29774[Global_1578 /*29*/].f_3), 0);
				}
				func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_124(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97353.f_12305[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_84();
				if (Global_15705)
				{
					unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
					unk_0xA734310215BCF528(4);
					unk_0xA734310215BCF528(0);
					unk_0xA734310215BCF528(2);
					unk_0x164FB269C22AF51C("CELL_CONDFON");
					unk_0x54534D588C114163(&Global_15707);
					unk_0x5BB4D22B8B03A30B();
					func_56("CELL_300");
					func_56("CELL_219");
					func_56("CELL_219");
					unk_0xD4D85E4148B638AD();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_97353.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97353.f_29774[Global_1578 /*29*/].f_3), &(Global_97353.f_29774[Global_1578 /*29*/].f_7), &Var0, &(Global_97353.f_29774[Global_1578 /*29*/].f_3), 0);
					}
				}
				func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_83();
			break;
		
		default:
			break;
	}
}

void func_83()
{
	if (unk_0x64BAE9BE701E6C19(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x4ED6CFDFE8D4131A(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
		}
		else
		{
			func_85(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 17);
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_84()
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97353.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 0);
					break;
				
				case 2:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 1);
					break;
				
				case 3:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 2);
					break;
				
				case 4:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 3);
					break;
				
				case 5:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 4);
					break;
				
				case 6:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 5);
					break;
				
				case 7:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_97353.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 6);
					break;
				
				case 2:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 0);
					break;
				
				case 3:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 1);
					break;
				
				case 4:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 2);
					break;
				
				case 5:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 3);
					break;
				
				case 6:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 4);
					break;
				
				case 7:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_97353.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 5);
					break;
				
				case 2:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 6);
					break;
				
				case 3:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 1);
					break;
				
				case 4:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 0);
					break;
				
				case 5:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 2);
					break;
				
				case 6:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 3);
					break;
				
				case 7:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2544848)
			{
				case 1:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 0);
					break;
				
				case 2:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 1);
					break;
				
				case 3:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 2);
					break;
				
				case 4:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 3);
					break;
				
				case 5:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 4);
					break;
				
				case 6:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 5);
					break;
				
				case 7:
					unk_0x45BD4B304F62586D(unk_0x217E9DC48139933D(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_85(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF6EA2AC68E7C7293(uParam0, sParam1);
	unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x2CF12F9ACF18F048(sParam7))
	{
		func_56(sParam7);
	}
	if (!unk_0x2CF12F9ACF18F048(iParam8))
	{
		func_56(iParam8);
	}
	if (!unk_0x2CF12F9ACF18F048(iParam9))
	{
		func_56(iParam9);
	}
	if (!unk_0x2CF12F9ACF18F048(iParam10))
	{
		func_56(iParam10);
	}
	if (!unk_0x2CF12F9ACF18F048(iParam11))
	{
		func_56(iParam11);
	}
	unk_0xD4D85E4148B638AD();
}

void func_86(int iParam0)
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_55(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x4ED6CFDFE8D4131A(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(iVar2);
								unk_0xD4D85E4148B638AD();
							}
							Global_2832[iVar0] = 1;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97353.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97353.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97353.f_12395[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2543383[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2543383[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2543383[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(Global_2269);
								unk_0xD4D85E4148B638AD();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x4ED6CFDFE8D4131A(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(iVar7);
								unk_0xD4D85E4148B638AD();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x4ED6CFDFE8D4131A(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(iVar8);
								unk_0xD4D85E4148B638AD();
							}
							else if (iVar1 == 8)
							{
								unk_0xF6EA2AC68E7C7293(Global_14374, "SET_DATA_SLOT");
								unk_0xA734310215BCF528(1);
								unk_0xA734310215BCF528(iVar0);
								unk_0xA734310215BCF528(Global_2270[iVar1 /*15*/].f_10);
								unk_0xA734310215BCF528(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xA734310215BCF528(42);
								unk_0xD4D85E4148B638AD();
							}
							else
							{
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_87()
{
	switch (iLocal_99)
	{
		case 1:
			unk_0x393FC215FEC6D8F1(0, 1);
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
			{
				StringCopy(&cLocal_144, "CELL_296", 16);
				func_49();
			}
			else
			{
				StringCopy(&cLocal_144, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0x4ED6CFDFE8D4131A(Global_2263, 22))
			{
				unk_0x393FC215FEC6D8F1(0, 1);
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_77();
				}
				iLocal_99 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_88(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	if (Global_1602437.f_69970 == 0 && Global_1602437.f_69971 == 0)
	{
		unk_0x0E3F4AF2D63491FB();
	}
}

void func_91(int iParam0, int iParam1)
{
	if (Global_1602437.f_69970 == 1)
	{
	}
	else if (Global_1602437.f_69971 == 1)
	{
	}
	else
	{
		unk_0xA6216469A69F3068(iParam0, iParam1);
	}
}

int func_92()
{
	if (unk_0x4ED6CFDFE8D4131A(Global_2263, 15))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xCCBB0BB9790E1F47(iParam0, uParam1) || (iParam2 == 1 && unk_0xA799AFD74BAFEA0F(iParam0, iParam1)))
	{
		if (unk_0xB0FB6CFAA5A1C833())
		{
			if (unk_0x37DF360F235A3893() == 0 || (unk_0x4E4F57E11BB51285() && unk_0x3653C46DD33107D5(2)))
			{
				return 0;
			}
		}
		if (unk_0x535384D6067BA42E() || unk_0xF0451C6FF481E814())
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

void func_94()
{
	if (Global_14335)
	{
		Local_83 = { -90.3f, 0f, 90f };
		Local_86 = { 1.5f, 0f, -17f };
		if (func_79())
		{
			unk_0xD984904601D69712(&Local_89, 0);
			Local_83 = { Local_89 };
			unk_0xA5D9670641C54F6B(&Local_92);
			Local_86 = { Local_92 };
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
		}
		if (iLocal_119 == 0)
		{
			if (iLocal_120)
			{
				Local_80.f_0 = (Local_80.f_0 - 14f);
			}
			if (Local_80.f_0 < Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
			{
				iLocal_120 = 0;
			}
			if (iLocal_121)
			{
				Local_80.f_1 = (Local_80.f_1 + 7f);
			}
			if (Local_80.f_1 > Local_86.f_1 || Local_80.f_1 == Local_86.f_1)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_80.f_2 = (Local_80.f_2 + 12f);
			}
			if (Local_80.f_2 > Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
			{
				iLocal_122 = 0;
			}
		}
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 - 1f);
		}
		if (Local_77.f_0 < Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			Local_77.f_0 = Local_83.f_0;
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 - 0.5f);
		}
		if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			Local_77.f_1 = Local_83.f_1;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 + 11f);
		}
		if (Local_77.f_2 > Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			Local_77.f_2 = Local_83.f_2;
			iLocal_119 = 0;
		}
		if (func_79() == 0)
		{
			unk_0x8B04C3463BAA2E87(Local_77, 0);
			unk_0xD191BA2C5A7D3C46(Local_80);
		}
	}
	else
	{
		Local_83 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 - 1f);
		}
		if (Local_77.f_0 < Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 + 2f);
		}
		if (Local_77.f_1 > Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 + 7f);
		}
		if (Local_77.f_2 > Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			iLocal_119 = 0;
		}
		unk_0x8B04C3463BAA2E87(Local_77, 0);
	}
	if (Global_14335)
	{
		if (((((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0)
		{
			if (func_79())
			{
			}
			else
			{
				Local_77 = { Local_83 };
				unk_0x8B04C3463BAA2E87(Local_77, 0);
				Local_80 = { Local_86 };
				unk_0xD191BA2C5A7D3C46(Local_80);
			}
			if (iLocal_102 == 0)
			{
				Global_16726 = 0;
				func_91(1, 1);
				iLocal_114 = 1;
				func_95(1);
				func_53();
				func_96();
				func_51(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_141 = 1;
				iLocal_142 = 1;
				func_103();
				func_124(uLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
				{
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				func_126();
			}
		}
	}
	else if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
	{
		Local_77 = { Local_83 };
		unk_0x8B04C3463BAA2E87(Local_77, 0);
		Global_16726 = 0;
	}
}

void func_95(bool bParam0)
{
	if (func_132())
	{
		if (bParam0)
		{
			if (!unk_0xC5B24AF209DE4AFD())
			{
				unk_0x2EB032CE7BD2860B(1);
				if (Global_2543374 > 0 && Global_2543374 < 99)
				{
					unk_0x63B02FF75F633209(sLocal_32[Global_2543374], 0);
					unk_0xA7699283C152C32E(0.25f);
				}
			}
		}
		else if (unk_0xC5B24AF209DE4AFD())
		{
			unk_0x2EB032CE7BD2860B(0);
		}
	}
}

void func_96()
{
	if (Global_2543373 > 0 && Global_2543373 < 99)
	{
		unk_0xFA08722A5EA82DA7(sLocal_18[Global_2543373]);
	}
}

void func_97()
{
	if (Global_14335)
	{
		iLocal_124 = 0;
		func_53();
		func_88(1, 1);
		func_91(1, 1);
		iLocal_114 = 1;
		Global_16729 = 1;
	}
}

void func_98()
{
	if (iLocal_126 == 0)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_2263, 28))
		{
			StringCopy(&cLocal_144, "CELL_296", 16);
			func_49();
		}
		else
		{
			StringCopy(&cLocal_144, "CELL_295", 16);
			func_27();
		}
		if (unk_0xD3852F22AB713A1F(&cLocal_144, "DUMMYCOMPARISON"))
		{
			fLocal_97 = fLocal_98;
			fLocal_95 = fLocal_96;
			fLocal_98 = fLocal_97;
			fLocal_96 = fLocal_95;
		}
		iLocal_99 = 1;
	}
}

void func_99()
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		unk_0xB906B139171B1845(-1, "Menu_Back", &Global_14382, 1);
	}
}

void func_100()
{
	unk_0xF1142E5D64B47802(0, 0);
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 1;
}

void func_101()
{
	func_102();
}

void func_102()
{
	if (iLocal_150)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_150 = 0;
		}
	}
	if (iLocal_150 == 0)
	{
	}
}

void func_103()
{
	if (Global_14393.f_1 > 3)
	{
		if (!unk_0x535384D6067BA42E())
		{
			unk_0x029823681D10A10E(uLocal_139, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_104()
{
	if (func_55(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_11();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_105(int iParam0)
{
	if (Global_14551)
	{
		func_88(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_106())
	{
		Global_14393.f_1 = 3;
	}
}

int func_106()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	unk_0x562F5D788AF3FA80(0, 0, 1);
	unk_0x562F5D788AF3FA80(0, 56, 1);
	if (iLocal_149 == 0)
	{
		unk_0xDA067FC477B3E571(0, Global_14366);
		unk_0xDA067FC477B3E571(0, Global_14363);
		unk_0x562F5D788AF3FA80(0, 278, 1);
		unk_0x562F5D788AF3FA80(0, 279, 1);
		unk_0x562F5D788AF3FA80(0, 280, 1);
		unk_0x562F5D788AF3FA80(0, 281, 1);
		unk_0x562F5D788AF3FA80(0, 282, 1);
		unk_0x562F5D788AF3FA80(0, 282, 1);
		unk_0x562F5D788AF3FA80(0, 284, 1);
		unk_0x562F5D788AF3FA80(0, 285, 1);
		unk_0x562F5D788AF3FA80(0, 69, 1);
		unk_0x562F5D788AF3FA80(0, 70, 1);
		unk_0x562F5D788AF3FA80(0, 114, 1);
		unk_0x562F5D788AF3FA80(0, 71, 1);
		unk_0x562F5D788AF3FA80(0, 72, 1);
		unk_0x562F5D788AF3FA80(0, 74, 1);
		unk_0x562F5D788AF3FA80(0, 75, 1);
		unk_0x562F5D788AF3FA80(0, 76, 1);
		unk_0x562F5D788AF3FA80(0, 73, 1);
		unk_0x562F5D788AF3FA80(0, 77, 1);
		unk_0x562F5D788AF3FA80(0, 78, 1);
		unk_0x562F5D788AF3FA80(0, 286, 1);
		unk_0x562F5D788AF3FA80(0, 287, 1);
		unk_0x562F5D788AF3FA80(0, 79, 1);
		unk_0x562F5D788AF3FA80(0, 80, 1);
		unk_0x562F5D788AF3FA80(0, 81, 1);
		unk_0x562F5D788AF3FA80(0, 82, 1);
		unk_0x562F5D788AF3FA80(0, 86, 1);
		unk_0x562F5D788AF3FA80(0, 59, 1);
		unk_0x562F5D788AF3FA80(0, 60, 1);
		unk_0x562F5D788AF3FA80(0, 61, 1);
		unk_0x562F5D788AF3FA80(0, 62, 1);
		unk_0x562F5D788AF3FA80(0, 63, 1);
		unk_0x562F5D788AF3FA80(0, 64, 1);
		unk_0x562F5D788AF3FA80(0, 87, 1);
		unk_0x562F5D788AF3FA80(0, 88, 1);
		unk_0x562F5D788AF3FA80(0, 89, 1);
		unk_0x562F5D788AF3FA80(0, 90, 1);
		unk_0x562F5D788AF3FA80(0, 107, 1);
		unk_0x562F5D788AF3FA80(0, 108, 1);
		unk_0x562F5D788AF3FA80(0, 109, 1);
		unk_0x562F5D788AF3FA80(0, 110, 1);
		unk_0x562F5D788AF3FA80(0, 111, 1);
		unk_0x562F5D788AF3FA80(0, 112, 1);
		unk_0x562F5D788AF3FA80(0, 113, 1);
		unk_0x562F5D788AF3FA80(0, 114, 1);
		unk_0x562F5D788AF3FA80(0, 91, 1);
		unk_0x562F5D788AF3FA80(0, 92, 1);
		unk_0x562F5D788AF3FA80(0, 68, 1);
		unk_0x562F5D788AF3FA80(0, 102, 1);
		unk_0x562F5D788AF3FA80(0, 136, 1);
		unk_0x562F5D788AF3FA80(0, 137, 1);
		unk_0x562F5D788AF3FA80(0, 138, 1);
		unk_0x562F5D788AF3FA80(0, 139, 1);
		unk_0x562F5D788AF3FA80(0, 102, 1);
	}
}

int func_108()
{
	var uVar0;
	
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			uVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
			if (unk_0xE052C1B1CAA4ECE4(uVar0, -1))
			{
				return 1;
			}
			else if (!unk_0xD214895E39AA3787(uVar0, -1) == unk_0x096275889B8E0EE0())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109()
{
	bool bVar0;
	
	func_116(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x03A753E2C8458335())
		{
			return 1;
		}
	}
	if (func_115())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_114())
	{
		return 1;
	}
	if (func_113(157))
	{
		if (!func_112())
		{
			return 1;
		}
	}
	if (func_113(155))
	{
		return 1;
	}
	if (!unk_0x4C82BD446C34CACD())
	{
		return 1;
	}
	if (func_110() != 0)
	{
		if (unk_0x8E34C953364A76DD(func_110()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_110()
{
	switch (func_111())
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

int func_111()
{
	return Global_24444;
}

bool func_112()
{
	return Global_2428131.f_572;
}

int func_113(int iParam0)
{
	if (unk_0xC9F59C0A710ECD34(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_114()
{
	return Global_2435238;
}

bool func_115()
{
	return Global_2428131.f_567;
}

void func_116(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5CE8DE5909565748(1))
	{
		iVar1 = unk_0xA85E614430EFF816(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x57EC5FA4D4D6AFCA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_117(iVar0);
					break;
				
				case 2:
					unk_0x57EC5FA4D4D6AFCA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_117(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 3))
	{
		if (func_119(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x275F255ED201B937(Var0.f_1);
			if (unk_0xD42BD6EB2E0F1677(iVar3))
			{
				if (unk_0x52BE10F427339B39(iVar3, 0))
				{
					iVar4 = unk_0xB3598EA616C3FFC3(iVar3, 0);
					if (unk_0x0E7910A63E05B12C(iVar4, Var0.f_2) && unk_0xB779D92A280DB7F7())
					{
						if (func_118(iVar4, &bVar5))
						{
							unk_0x745F15A215F2DDF1(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x6C9B2BE03BBD5C98(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, var uParam1)
{
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (!unk_0x138190F64DB4BBD1(iParam0))
		{
			if (unk_0x3BDB448E5390D817(iParam0))
			{
				unk_0xDC19C288082E586E(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x622B1980CBE13332(iParam0, 0))
		{
			if (unk_0x711DB131BD66A278(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0x1DB8366B5C46DA9E(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0xBFFB35986CAAE58C(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_120(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

void func_121()
{
	if (func_122())
	{
		unk_0x90BFA05E4157C5B1();
		if (unk_0xA42EDF1E88734A7E(0))
		{
			iLocal_102 = 1;
			iLocal_110 = 0;
		}
		else
		{
			Global_16729 = 1;
			Global_14393.f_1 = 3;
			unk_0x58F441B90EA84D06();
		}
	}
	else
	{
		iLocal_108 = 0;
		iLocal_109 = 0;
		if (iLocal_103 == 1)
		{
			if (iLocal_126 == 0)
			{
				if (unk_0x64BAE9BE701E6C19(uLocal_139))
				{
					if (func_132())
					{
						if (Global_2543374 == 0)
						{
							if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
							{
								func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x4ED6CFDFE8D4131A(Global_2544648, 2))
						{
							func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x64BAE9BE701E6C19(uLocal_139))
			{
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
			}
			iLocal_103 = 0;
		}
		iLocal_110 = 0;
		unk_0x58F441B90EA84D06();
	}
}

int func_122()
{
	if (Global_1602437.f_69970 == 1)
	{
		if (Global_68245)
		{
			return 0;
		}
	}
	if (Global_1602437.f_69971 == 1)
	{
		if (Global_68245)
		{
			return 0;
		}
	}
	if (unk_0x50732C31F5D806DF() || unk_0x588D1C657C1F9299())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_2264, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_123(var uParam0, char* sParam1)
{
	unk_0xF6EA2AC68E7C7293(uParam0, sParam1);
	unk_0xD4D85E4148B638AD();
}

void func_124(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6EA2AC68E7C7293(uParam0, sParam1);
	unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xA734310215BCF528(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD4D85E4148B638AD();
}

int func_125()
{
	if (Global_68245)
	{
		Global_14393 = 3;
	}
	else
	{
		Global_14393 = func_11();
	}
	if (Global_14393 > 3)
	{
		Global_14393 = 3;
	}
	return Global_97353.f_12305[Global_14393 /*20*/].f_7;
}

void func_126()
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	Global_16728 = 0;
	iLocal_126 = 0;
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		Local_66 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
	}
	if (Global_14335)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_136)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_103();
			func_75();
			unk_0xA8C44C13419634F2();
		}
		func_123(uLocal_139, "OPEN_SHUTTER");
		unk_0x36CDD81627A6FCD2();
		func_98();
		iLocal_128 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_91(1, 1);
		func_95(1);
		func_53();
		func_96();
		func_51(0);
		iLocal_114 = 1;
	}
}

void func_127(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 15);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 15);
	}
}

bool func_128()
{
	return Global_1315874;
}

void func_129()
{
}

int func_130(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && bParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, iParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_131()
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x42FAEF3CD9241800(unk_0x096275889B8E0EE0()))
		{
			unk_0x774524FA58C28A3A(unk_0x096275889B8E0EE0(), 0, 0);
			unk_0x1C36B8A7C85226C3(fLocal_155);
			unk_0xCDA919B58C714AE7(fLocal_156);
			unk_0xCD6A6972C7099E65(fLocal_157);
		}
		else
		{
			unk_0x1C36B8A7C85226C3(fLocal_155);
			unk_0xCDA919B58C714AE7(fLocal_156);
			unk_0xCD6A6972C7099E65(fLocal_157);
		}
	}
	unk_0xD9784B271E11D22F(fLocal_158);
	unk_0xF5544AA3CC440423(fLocal_159);
	unk_0xEC94149ED2DC034B(fLocal_160);
	unk_0x70277EDD9EABE9A7(fLocal_161);
	func_50();
}

int func_132()
{
	if (iLocal_55 == 0)
	{
		iLocal_55 = 1;
	}
	return 1;
}

