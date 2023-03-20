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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[4] = { 0, 0, 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	float fLocal_85 = 0f;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_101 = 0f;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	float fLocal_111 = 0f;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 16;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	char* sLocal_301 = NULL;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_42 = 20f;
	iLocal_116 = 1;
	iLocal_307 = 6000;
	Local_51 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x8D841F1DD3FA555F(11))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			if (unk_0xCD67A1A6022640ED(iLocal_54))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_54);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_56))
		{
			if (unk_0xCD67A1A6022640ED(iLocal_56))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_56);
			}
		}
		func_176();
	}
	if (func_175(283, 1))
	{
		unk_0xC23A229F78DAD92A();
	}
	if (func_146(Local_51, -1, 0, 0, 0))
	{
		if ((unk_0x0C937048CF6952B5() > 2 && unk_0x0C937048CF6952B5() < 15) && !unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
		{
		}
		else
		{
			unk_0xC23A229F78DAD92A();
		}
		func_143(-1);
	}
	else
	{
		unk_0xC23A229F78DAD92A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x52AB115D3D6A8417() || bLocal_115)
		{
			if (!func_142())
			{
				if (func_141())
				{
					func_176();
				}
			}
			unk_0x36137B7A77318822("RE_SDRM", 0);
			switch (iLocal_47)
			{
				case 0:
					if (func_129())
					{
						func_176();
					}
					if (iLocal_49)
					{
						iLocal_50 = 1;
						iLocal_47 = 1;
					}
					else
					{
						func_120();
					}
					break;
				
				case 1:
					func_119();
					if (!iLocal_113)
					{
						func_118();
						func_115();
						func_104();
						if (!unk_0xDD7720E17AF5FE17(uLocal_317))
						{
							func_103();
						}
					}
					else
					{
						func_100();
						if (!bLocal_123)
						{
							func_98();
						}
						func_90();
						func_88();
						func_72();
						func_71(iLocal_54, 0);
						if (!bLocal_120)
						{
						}
						if (iLocal_48 == 0 && !bLocal_117)
						{
							func_67();
							func_65();
						}
						else
						{
							func_60();
						}
						if (iLocal_48 == 3)
						{
							if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_86, 1) < 100f)
							{
								if (!unk_0xEF7A631CCBD01652())
								{
									unk_0x0ADAEB274E23621D("sdrm_mcs_2", 8);
								}
								if (unk_0xEF7A631CCBD01652())
								{
									if (unk_0xFE489BA9CA22B147())
									{
										if ((((!unk_0x5FEB513A4402FD59(iLocal_54) && !unk_0x5FEB513A4402FD59(iLocal_56)) && !unk_0x5FEB513A4402FD59(iLocal_55)) && !unk_0x5FEB513A4402FD59(iLocal_57)) && !unk_0x930F8FBB8E9537CC(iLocal_131))
										{
											unk_0x45113353D51CDBF8("Groom", iLocal_54, 0);
											unk_0x45113353D51CDBF8("Groomsman", iLocal_56, 0);
											unk_0x45113353D51CDBF8("Bride", iLocal_55, 0);
											unk_0x45113353D51CDBF8("Father_of_the_bride", iLocal_57, 0);
										}
									}
								}
							}
							else if (unk_0xEF7A631CCBD01652())
							{
								unk_0x9AF02897E594E920();
							}
							if (bLocal_117)
							{
								if (func_59(1, 0, 1))
								{
									func_25();
								}
							}
							else if (!unk_0x5FEB513A4402FD59(iLocal_56))
							{
								if (unk_0xE5AB05962FA1FF3F(iLocal_56, 0))
								{
									if (unk_0xFBACB273AA628CC5(uLocal_321))
									{
										unk_0x0A8175F24237A3D4(&uLocal_321);
										if (unk_0xFBACB273AA628CC5(uLocal_319))
										{
											unk_0x0A8175F24237A3D4(&uLocal_319);
										}
										if (!unk_0xFBACB273AA628CC5(uLocal_319))
										{
											uLocal_319 = func_23(Local_66, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_54))
							{
								unk_0x754376E2234CBB4A(iLocal_54, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
							}
							if (!unk_0x5FEB513A4402FD59(iLocal_56))
							{
								unk_0x754376E2234CBB4A(iLocal_56, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
							}
							if (!unk_0x5FEB513A4402FD59(iLocal_55))
							{
								unk_0x754376E2234CBB4A(iLocal_55, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
							}
							if (!unk_0x5FEB513A4402FD59(iLocal_57))
							{
								unk_0x754376E2234CBB4A(iLocal_57, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
							}
							func_2();
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_176();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_176();
}

int func_3()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_54))
		{
			return 1;
		}
		else
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_54, unk_0x81873881071CD9FE(), 1) || unk_0x2C237D28F05F0008(iLocal_54))
			{
				return 1;
			}
			if (bLocal_115)
			{
				if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
				{
					func_21();
					if (func_4(&uLocal_135, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!unk_0x930F8FBB8E9537CC(iLocal_58))
	{
		if ((!unk_0x7404950238A154C2(iLocal_58, 0) || unk_0x1A95F99A66281615(iLocal_58)) || unk_0x2C237D28F05F0008(iLocal_58))
		{
			func_21();
			if (func_4(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (unk_0x557EC1A9A884772D(unk_0x81873881071CD9FE(), joaat("towtruck")) || unk_0x557EC1A9A884772D(unk_0x81873881071CD9FE(), joaat("towtruck2")))
			{
				if (unk_0x6AD274E515B19C02(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), iLocal_58))
				{
					func_21();
					if (func_4(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		func_21();
		if (func_4(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (!unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), 150f, 150f, 150f, 0, 1, 0))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_58))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_58, 0))
				{
					unk_0x9979AC3F15FA9FCF(unk_0x1329891157A54C63(), 1, 0);
					unk_0xE453EF46E6CA8CB3(unk_0x1329891157A54C63(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_48 >= 1)
	{
		if (bLocal_122)
		{
			if (unk_0x5FEB513A4402FD59(iLocal_56))
			{
				func_21();
				return 1;
			}
			else if (unk_0xBBEF8270CE27C0EE(iLocal_56, unk_0x81873881071CD9FE(), 1))
			{
				func_21();
				return 1;
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iLocal_58))
		{
			if (!unk_0x8D28631AAAEFC957(iLocal_58, unk_0x81873881071CD9FE(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (!iLocal_125)
				{
					func_21();
					if (func_4(&uLocal_135, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_125 = 1;
					}
				}
			}
			else
			{
				iLocal_125 = 0;
			}
			if (!unk_0x8D28631AAAEFC957(iLocal_58, unk_0x81873881071CD9FE(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_48 == 3)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_55) || unk_0x5FEB513A4402FD59(iLocal_57))
			{
				return 1;
			}
			else if (unk_0xBBEF8270CE27C0EE(iLocal_55, unk_0x81873881071CD9FE(), 1) || unk_0xBBEF8270CE27C0EE(iLocal_57, unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_56))
		{
			if (!unk_0x8D28631AAAEFC957(iLocal_56, unk_0x81873881071CD9FE(), 20f, 20f, 20f, 0, 1, 0) && iLocal_309)
			{
				if (!iLocal_126)
				{
					func_21();
					if (func_4(&uLocal_135, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 0;
			}
			if (!unk_0x8D28631AAAEFC957(iLocal_56, unk_0x81873881071CD9FE(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_17();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_8())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_6();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_7()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_8()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_10()
{
	if (func_16(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_11();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

int func_11()
{
	func_12();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_15(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_14(unk_0x81873881071CD9FE());
			if (func_13(iVar0) && (!func_16(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_13(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_19()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_21()
{
	Global_14559 = 0;
	func_22();
}

void func_22()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

var func_23(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_24(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

float func_24(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_25()
{
	switch (iLocal_130)
	{
		case 0:
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_52(1, 1, 1, 0);
			unk_0xA1427E25E074F116(0);
			iLocal_309 = 0;
			iLocal_130++;
			break;
		
		case 1:
			iLocal_130++;
			break;
		
		case 2:
			if ((((!unk_0x5FEB513A4402FD59(iLocal_54) && !unk_0x5FEB513A4402FD59(iLocal_56)) && !unk_0x5FEB513A4402FD59(iLocal_55)) && !unk_0x5FEB513A4402FD59(iLocal_57)) && !unk_0x930F8FBB8E9537CC(iLocal_131))
			{
				if (func_51())
				{
					unk_0x991ABCA492D8C897(iLocal_131, "SDRM_Car", 0, 0, 0);
					unk_0x991ABCA492D8C897(iLocal_54, "Groom", 0, 0, 0);
					unk_0x991ABCA492D8C897(iLocal_56, "Groomsman", 0, 0, 0);
					unk_0x991ABCA492D8C897(iLocal_55, "Bride", 0, 0, 0);
					unk_0x991ABCA492D8C897(iLocal_57, "Father_of_the_bride", 0, 0, 0);
					unk_0x5632EA201EAF956B(4);
					iLocal_130++;
				}
			}
			break;
		
		case 3:
			if (unk_0x1787C7476F17BD5C(0))
			{
				if (!unk_0x930F8FBB8E9537CC(iLocal_131))
				{
					unk_0x5CC9D6711FE01F0D(iLocal_131);
					unk_0xE6116B2B5D358CE9(iLocal_131, 1);
					unk_0xF1BC58601CA4A5C7(1);
					unk_0x3BF4F473786B0150(1);
					unk_0x270066FDBAF3A458(0f);
					unk_0xEAB527164AD92BF3(-7f, 1065353216);
				}
				iLocal_130++;
			}
			break;
		
		case 4:
			unk_0xF210D34D7F7152ED(&iLocal_54);
			unk_0xF210D34D7F7152ED(&iLocal_56);
			unk_0xF210D34D7F7152ED(&iLocal_55);
			unk_0xF210D34D7F7152ED(&iLocal_57);
			func_52(0, 1, 1, 0);
			unk_0xA1427E25E074F116(1);
			func_26();
			break;
	}
}

void func_26()
{
	while (!func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_30(-1, 0);
	func_27();
	func_176();
}

void func_27()
{
	func_28();
}

int func_28()
{
	if (func_29(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_29(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_47(iParam0))
	{
		func_46(iParam0, iParam1);
		if (!func_45(51))
		{
			func_41("RE_REWARD", 1, 0, 4000, 10000, func_44(), 0, 138, 0);
			func_40(51);
		}
		if (func_39(iParam0))
		{
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_38(iParam0, iParam1) != 322)
		{
			func_32(func_38(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_31(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
			{
				func_31(7);
			}
			else
			{
				func_31(1);
			}
		}
	}
}

void func_31(int iParam0)
{
	Global_98917 = iParam0;
}

void func_32(int iParam0, var uParam1, var uParam2)
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
		func_36((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_33();
	}
}

void func_33()
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_35(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_34() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_28();
				}
			}
		}
	}
}

int func_34()
{
	return Global_24946;
}

int func_35(int iParam0, int iParam1)
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_37()
{
	return Global_1312729;
}

int func_38(int iParam0, int iParam1)
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

int func_39(int iParam0)
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

void func_40(int iParam0)
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
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_43();
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_44()
{
	func_12();
	switch (Global_98931.f_1750.f_539.f_3549)
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

int func_45(int iParam0)
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
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
}

int func_47(int iParam0)
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

int func_48()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_49(Var0);
	return uVar16;
}

int func_49(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8DAF7A748E41AD46(&cParam0))
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

int func_50()
{
	return 1;
}

bool func_51()
{
	bool bVar0;
	
	bVar0 = unk_0x0A11B2F86364F5B7();
	if (!Global_69019)
	{
		if (!bVar0)
		{
			Global_69019 = 1;
		}
	}
	return bVar0;
}

void func_52(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_58(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_8())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_57(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_58(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_57(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_53(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_53(int iParam0)
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_54())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_56(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_57(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x4DA8CC792B3D5CB0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (bParam0)
		{
			if (unk_0x930F8FBB8E9537CC(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE())
				{
					return 0;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCADEFB8A5B164C68(iVar0) < 0.95f || unk_0xCADEFB8A5B164C68(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	return 1;
}

void func_60()
{
	if (!unk_0x930F8FBB8E9537CC(iLocal_58) && !unk_0x930F8FBB8E9537CC(iLocal_54))
	{
		if (!iLocal_116)
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_58, 0) && unk_0x04C377C10639B842(iLocal_54, iLocal_58, 0))
			{
				iLocal_116 = 1;
				if (unk_0xFBACB273AA628CC5(uLocal_318))
				{
					unk_0x0A8175F24237A3D4(&uLocal_318);
				}
				if (iLocal_121 && !bLocal_117)
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_319))
					{
						uLocal_319 = func_23(Local_66, 1);
					}
				}
				if (!func_64())
				{
				}
			}
		}
		if (!iLocal_116 && !iLocal_118)
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_58, 0))
			{
				if (!unk_0x04C377C10639B842(iLocal_54, iLocal_58, 0))
				{
					if (!func_64())
					{
					}
					if (unk_0xFBACB273AA628CC5(uLocal_318))
					{
						unk_0x0A8175F24237A3D4(&uLocal_318);
					}
					if (!unk_0xFBACB273AA628CC5(uLocal_318))
					{
						uLocal_318 = func_63(iLocal_54, 0, 145);
						unk_0xD5CD0E7173F858FF(uLocal_318, 1);
					}
					iLocal_116 = 0;
					iLocal_118 = 1;
				}
			}
		}
		if (iLocal_116)
		{
			if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_58, 0))
			{
				if (!func_64())
				{
				}
				if (!unk_0xFBACB273AA628CC5(uLocal_318))
				{
					uLocal_318 = func_61(iLocal_58, 0, 0);
					unk_0xD5CD0E7173F858FF(uLocal_318, 1);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_319))
				{
					unk_0x0A8175F24237A3D4(&uLocal_319);
				}
				iLocal_116 = 0;
			}
			if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_58, 0) && !unk_0x04C377C10639B842(iLocal_54, iLocal_58, 0))
			{
				if (!func_64())
				{
				}
				if (!unk_0xFBACB273AA628CC5(uLocal_318))
				{
					uLocal_318 = func_61(iLocal_58, 0, 0);
					unk_0xD5CD0E7173F858FF(uLocal_318, 1);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_319))
				{
					unk_0x0A8175F24237A3D4(&uLocal_319);
				}
				iLocal_116 = 0;
			}
		}
	}
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	return func_62(iParam0, !bParam1, bParam2);
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_24(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_24(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_24(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_63(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_54))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			if (unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), 4f, 4f, 4f, 0, 1, 0))
			{
				if ((!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0xE5AB05962FA1FF3F(iLocal_54, 0)) || unk_0x2ADC2166A28358CB(unk_0x81873881071CD9FE()))
				{
					if (unk_0xFBACB273AA628CC5(uLocal_320))
					{
						unk_0x0A8175F24237A3D4(&uLocal_320);
						if (!unk_0xFBACB273AA628CC5(uLocal_319))
						{
							uLocal_319 = func_23(Local_66, 1);
						}
					}
				}
				else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0xE5AB05962FA1FF3F(iLocal_54, 0))
				{
					if (unk_0xFBACB273AA628CC5(uLocal_320))
					{
						unk_0x0A8175F24237A3D4(&uLocal_320);
						if (!unk_0xFBACB273AA628CC5(uLocal_319))
						{
							uLocal_319 = func_23(Local_66, 1);
						}
					}
				}
				else if (unk_0xFBACB273AA628CC5(uLocal_319))
				{
					unk_0x0A8175F24237A3D4(&uLocal_319);
					if (!unk_0xFBACB273AA628CC5(uLocal_320))
					{
						uLocal_320 = func_63(iLocal_54, 0, 145);
					}
				}
				if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
				{
				}
			}
			else if (unk_0xFBACB273AA628CC5(uLocal_319))
			{
				unk_0x0A8175F24237A3D4(&uLocal_319);
				if (!unk_0xFBACB273AA628CC5(uLocal_320))
				{
					uLocal_320 = func_63(iLocal_54, 0, 145);
				}
			}
			if (!unk_0xCD67A1A6022640ED(iLocal_54))
			{
				if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
				{
					unk_0x27CC98B7C879C320(iLocal_54);
					unk_0xABED360AB1F46D3D(iLocal_54, func_66());
					unk_0x64ACA71A49AA111C(iLocal_54, 1);
					unk_0x2DA3CE5ACB2F30AC(iLocal_54, 0);
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					unk_0x27CC98B7C879C320(iLocal_54);
					unk_0xABED360AB1F46D3D(iLocal_54, func_66());
					unk_0x64ACA71A49AA111C(iLocal_54, 1);
					unk_0x2DA3CE5ACB2F30AC(iLocal_54, 0);
				}
			}
		}
	}
}

var func_66()
{
	return unk_0xC80D3C64CC2CE6A3(unk_0xEC537F0C0E8265EE());
}

void func_67()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (!func_70())
			{
				if (unk_0xCD67A1A6022640ED(iLocal_54))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_54);
				}
				if (unk_0xFA1212DE7C455679(iLocal_54, 1227113341) != 1 && unk_0xFA1212DE7C455679(iLocal_54, 1227113341) != 0)
				{
					unk_0x65C82688BA49CA39(iLocal_54, unk_0x81873881071CD9FE(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0xE5AB05962FA1FF3F(iLocal_54, 0))
				{
					unk_0x98046F3D16B9CF76(iLocal_54, 0, 0);
				}
				if (!iLocal_124)
				{
					if (!func_64())
					{
						iLocal_124 = 1;
						if (func_69())
						{
							func_68(&uLocal_135, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_68(&uLocal_135, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_124 = 0;
				if (((unk_0xFA1212DE7C455679(iLocal_54, 1227113341) == 1 || unk_0xFA1212DE7C455679(iLocal_54, 1227113341) == 0) || unk_0xFA1212DE7C455679(iLocal_54, 242628503) == 1) || unk_0xFA1212DE7C455679(iLocal_54, 242628503) == 0)
				{
					unk_0x27CC98B7C879C320(iLocal_54);
					if (!unk_0xCD67A1A6022640ED(iLocal_54))
					{
						unk_0xABED360AB1F46D3D(iLocal_54, func_66());
						unk_0x64ACA71A49AA111C(iLocal_54, 1);
						unk_0x2DA3CE5ACB2F30AC(iLocal_54, 0);
					}
				}
			}
		}
		else if (((!unk_0xCD67A1A6022640ED(iLocal_54) && !unk_0xE5AB05962FA1FF3F(iLocal_54, 0)) && unk_0xFA1212DE7C455679(iLocal_54, 242628503) != 1) && unk_0xFA1212DE7C455679(iLocal_54, 242628503) != 0)
		{
			unk_0xABED360AB1F46D3D(iLocal_54, func_66());
			unk_0x64ACA71A49AA111C(iLocal_54, 1);
			unk_0x2DA3CE5ACB2F30AC(iLocal_54, 0);
		}
	}
}

int func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_5(sParam2, iParam4, 0);
}

int func_69()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		if (unk_0x7404950238A154C2(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 1))
		{
			if ((unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1))) || unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1)))) || unk_0x8923BC9F314B991D(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
		{
			if (((((!unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()) && !unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE())) && !unk_0x25B75802E65C5545(unk_0x81873881071CD9FE())) && !unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE())) && !unk_0x193403916286AA4E(unk_0x81873881071CD9FE())) && !unk_0x557EC1A9A884772D(unk_0x81873881071CD9FE(), joaat("rhino")))
			{
				if (unk_0x59D35AC211D17FAB(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		if (unk_0x7404950238A154C2(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()), 0))
		{
			if ((((!unk_0x9F59BCFFFEAAD4B1(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()))) && !unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && !unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && !unk_0xE4CD4B212196D2C5(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_71(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()) && unk_0x86F7E6A693F6370F(iParam0))
			{
				if (unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0) == unk_0xE68E6B44DABA9C05(iParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0x3E3058289D865B2D(iParam0, unk_0x81873881071CD9FE()))
		{
			if (!bVar0)
			{
				unk_0xAF625598EDA64AD3(iParam0, unk_0x81873881071CD9FE(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0xD6509B60605337D9(iParam0))
			{
				unk_0xF64D185C5B88AF31(iParam0);
			}
		}
	}
}

void func_72()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_54))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_54) && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (func_86("stagd_chape_1"))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_319))
				{
					uLocal_319 = func_23(Local_66, 1);
				}
				iLocal_121 = 1;
			}
			if (func_86("stagd_chape_3"))
			{
				unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
				if (!unk_0x5FEB513A4402FD59(iLocal_54))
				{
					if (unk_0xE5AB05962FA1FF3F(iLocal_54, 0))
					{
						unk_0xEAD984C2869B8B7C(&uLocal_112);
						unk_0xF64D185C5B88AF31(0);
						unk_0xEFCD4942377423D3(0, 30600);
						unk_0x56D9ED1541046AF6(uLocal_112);
						unk_0xC65002CAA1212AF9(iLocal_54, uLocal_112);
						unk_0xA3561415EB3DA3A3(&uLocal_112);
					}
				}
			}
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 13.5f, 13.5f, 13.5f, 0, 1, 0) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if (unk_0x04C377C10639B842(iLocal_54, unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
				{
					if (iLocal_48 == 0)
					{
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_129 == 0)
							{
								if (!func_64())
								{
									func_85();
									if (func_4(&uLocal_135, "stagdau", sLocal_301, 4, 0, 0, 0))
									{
										iLocal_309 = 1;
									}
									bLocal_120 = true;
									iLocal_129++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_129 == 1)
							{
								if (!func_64())
								{
									unk_0xF1BC58601CA4A5C7(1);
									unk_0x3BF4F473786B0150(1);
									iLocal_129++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 2500)
						{
							if (iLocal_129 == 2)
							{
								if (!func_64())
								{
									func_85();
									if (func_11() == 0)
									{
										func_4(&uLocal_135, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_11() == 1)
									{
										func_4(&uLocal_135, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_11() == 2)
									{
										func_4(&uLocal_135, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_129++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
					}
					if (!bLocal_123)
					{
						if (iLocal_48 == 3)
						{
							if (!func_64())
							{
								if (iLocal_129 == 0)
								{
									func_4(&uLocal_135, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_129++;
								}
							}
						}
						if (iLocal_48 == 3)
						{
							if (unk_0xC9D9444186B5A374() > 5000)
							{
								if (iLocal_129 == 0)
								{
									if (!func_64())
									{
										iLocal_129++;
									}
								}
							}
						}
						if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_86, 150f, 150f, 150f, 0, 1, 0))
						{
							if (iLocal_302 == 0)
							{
								if (iLocal_306 == func_73(func_74()) + 11)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_302 = 1;
									}
								}
							}
							if (iLocal_302 < 2)
							{
								if (iLocal_306 == func_73(func_74()) + 10)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_302 = 2;
									}
								}
							}
							if (iLocal_302 < 3)
							{
								if (iLocal_306 == func_73(func_74()) + 9)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_302 = 3;
									}
								}
							}
							if (iLocal_302 < 4)
							{
								if (iLocal_306 == func_73(func_74()) + 8)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_302 = 4;
									}
								}
							}
							if (iLocal_302 < 5)
							{
								if (iLocal_306 == func_73(func_74()) + 7)
								{
									if (!func_64())
									{
										iLocal_302 = 5;
									}
								}
							}
							if (iLocal_302 < 6)
							{
								if (iLocal_306 == func_73(func_74()) + 6)
								{
									if (!func_64())
									{
										iLocal_302 = 6;
									}
								}
							}
							if (iLocal_302 < 7)
							{
								if (iLocal_306 == func_73(func_74()) + 5)
								{
									if (!func_64())
									{
										iLocal_302 = 7;
									}
								}
							}
							if (iLocal_302 < 8)
							{
								if (iLocal_306 == func_73(func_74()) + 4)
								{
									if (!func_64())
									{
										iLocal_302 = 8;
									}
								}
							}
							if (iLocal_302 < 9)
							{
								if (iLocal_306 == func_73(func_74()) + 3)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 9;
									}
								}
							}
							if (iLocal_302 < 10)
							{
								if (iLocal_306 == func_73(func_74()) + 2)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 10;
									}
								}
							}
							if (iLocal_302 < 11)
							{
								if (iLocal_306 == func_73(func_74()) + 1)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_302 < 6)
							{
								if (iLocal_306 == func_73(func_74()) + 6)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 7)
							{
								if (iLocal_306 == func_73(func_74()) + 5)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 8)
							{
								if (iLocal_306 == func_73(func_74()) + 4)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 9)
							{
								if (iLocal_306 == func_73(func_74()) + 3)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 10)
							{
								if (iLocal_306 == func_73(func_74()) + 2)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 11)
							{
								if (iLocal_306 == func_73(func_74()) + 1)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
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

int func_73(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_74()
{
	var uVar0;
	
	func_84(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_83(&uVar0, unk_0x25B31B877207A3A9());
	func_82(&uVar0, unk_0x0C937048CF6952B5());
	func_77(&uVar0, unk_0x8B6B3DD84CE74978());
	func_76(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_75(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_75(var uParam0, int iParam1)
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

void func_76(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_81(*uParam0);
	iVar1 = func_79(*uParam0);
	if (iParam1 < 1 || iParam1 > func_78(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_78(int iParam0, int iParam1)
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

int func_79(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_80(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_80(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_81(int iParam0)
{
	return iParam0 & 15;
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_85()
{
	Global_14559 = 0;
	func_19();
}

int func_86(char* sParam0)
{
	var uVar0;
	
	if (func_64())
	{
		MemCopy(&uVar0, {func_87()}, 4);
		if (unk_0xD994929E13CC1ED5(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_87()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x21C9C1BDAA5B68B1();
		iVar6 = (iVar6 + Global_16703);
		if (iVar6 > -1)
		{
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x86CCCD2FAE9D5E65(iLocal_54))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_54))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_54))
			{
				if (!iLocal_128 && bLocal_117)
				{
					unk_0xDE1125A413AF241C(0, 75, 1);
					unk_0xDE1125A413AF241C(0, 80, 1);
					iVar0 = unk_0x60FC347BF9CAD1BD();
					if (iVar0 != 0)
					{
						iVar1 = unk_0x7FCE6803A3D23268(iVar0);
						if (iVar1 != 4)
						{
							unk_0xDE1125A413AF241C(0, 79, 1);
							unk_0xDE1125A413AF241C(0, 286, 1);
							unk_0xDE1125A413AF241C(0, 287, 1);
							unk_0xDE1125A413AF241C(0, 26, 1);
							unk_0xDE1125A413AF241C(0, 273, 1);
							unk_0xDE1125A413AF241C(0, 4, 1);
							unk_0xDE1125A413AF241C(0, 270, 1);
							unk_0xDE1125A413AF241C(0, 5, 1);
							unk_0xDE1125A413AF241C(0, 1, 1);
							unk_0xDE1125A413AF241C(0, 271, 1);
							unk_0xDE1125A413AF241C(0, 6, 1);
							unk_0xDE1125A413AF241C(0, 2, 1);
							unk_0xDE1125A413AF241C(0, 272, 1);
							unk_0xDE1125A413AF241C(0, 3, 1);
						}
					}
					if (unk_0xD1FFD959917D4ED8(iLocal_54, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || unk_0x83666F9FB8FEBD4B() > 5000)
					{
						iLocal_128 = 1;
						unk_0xC1B1E9A034A63A62(0);
						func_52(1, 1, 1, 0);
						unk_0xB8BB626315D394F5(1);
						unk_0xF1BC58601CA4A5C7(0);
						unk_0x3BF4F473786B0150(0);
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
						unk_0xEE7F8F35078C057B(joaat("superd"), 3);
						while (!unk_0x518D7D5175AEE673(joaat("superd")))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						uLocal_133 = unk_0xA41C1C111139F838("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						uLocal_134 = unk_0xA41C1C111139F838("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						unk_0x4BC806FF702341FC(uLocal_133, "HAND_SHAKE", 0.25f);
						unk_0x4BC806FF702341FC(uLocal_134, "HAND_SHAKE", 0.25f);
						unk_0xDD0B0D77CB8995B1(uLocal_133, 1);
						unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(1000);
						unk_0x2CD388BEA8B3C5E8(uLocal_134, uLocal_133, 4000, 1, 1);
						unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
						unk_0xA450601E968044DB(Local_98, 10f, 0, 0, 0, 0, 0);
						if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
						{
							unk_0x2EDBED0C31D95957(unk_0x2ADE2CEED2637E95());
							if (unk_0x515B65C19A5CA9B1(unk_0x2ADE2CEED2637E95(), Local_98, 8f, 8f, 8f, 0, 1, 0))
							{
								iLocal_132 = unk_0x2ADE2CEED2637E95();
								unk_0xD768713E73165208(iLocal_132, 1, 0);
								unk_0x5D00E836B6BE8693(&iLocal_132);
							}
						}
						if (!unk_0x930F8FBB8E9537CC(iLocal_58))
						{
							unk_0xC390A6485FB80923(iLocal_58, 1);
							if (!unk_0xFBACB273AA628CC5(uLocal_318))
							{
								uLocal_318 = func_61(iLocal_58, 0, 0);
								unk_0xD5CD0E7173F858FF(uLocal_318, true);
							}
						}
						iLocal_116 = 0;
					}
				}
				if (iLocal_128 && unk_0x42E36F2D658EB2FF(uLocal_133))
				{
					if (unk_0x83666F9FB8FEBD4B() > 5700 && !iLocal_316)
					{
						if ((unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()) && unk_0x4D872223E3957144() == 4) || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0xF18003343B2E8EE9() == 4))
						{
							unk_0x45D2AAD93E9AC4B3("CamPushInNeutral", 0, 0);
							unk_0x35D7948F61AA3FEC(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_316 = 1;
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
						{
							unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 0, 0);
						}
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
						unk_0xF1BC58601CA4A5C7(1);
						unk_0x3BF4F473786B0150(1);
						func_52(0, 1, 1, 0);
						unk_0xDD0B0D77CB8995B1(uLocal_133, 0);
						unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
						unk_0x35B958B469415A23(uLocal_133, 0);
						unk_0x59E3A6BEFC421137(0);
					}
				}
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xA450601E968044DB(Local_86, 5f, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_122)
			{
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_102, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x32A12757CBF48A33(joaat("ig_bestmen"));
					if (unk_0x33ACB874CECA2D4B(joaat("ig_bestmen")))
					{
						iLocal_56 = unk_0x206897C6DBC12488(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						func_89(&uLocal_135, 4, iLocal_56, "BESTMAN", 0, 1);
						unk_0x03F73D35E5AC583A(iLocal_56, 0, 0, 0, 0);
						unk_0x506A601663C5417C(iLocal_56, joaat("player"));
						unk_0x1D15D99A10A15334(iLocal_56, 1);
						unk_0xCE566DBDCACD245E(iLocal_56, 185, 1);
						unk_0xEAD984C2869B8B7C(&uLocal_112);
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), -1);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2048, 2);
						unk_0x56D9ED1541046AF6(uLocal_112);
						unk_0xC65002CAA1212AF9(iLocal_56, uLocal_112);
						unk_0xA3561415EB3DA3A3(&uLocal_112);
						bLocal_122 = true;
					}
				}
			}
			if (!bLocal_123)
			{
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_76, 20f, 20f, 20f, 0, 1, 0))
				{
					func_21();
					if (!func_64())
					{
						func_4(&uLocal_135, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_123 = true;
					}
				}
			}
			if (((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_69, Local_72, fLocal_75, 0, 1, 0) && unk_0xD1FFD959917D4ED8(iLocal_54, Local_69, Local_72, fLocal_75, 0, 1, 0)) || (unk_0x515B65C19A5CA9B1(iLocal_54, Local_66, 0f, 0f, 2f, 1, 1, 0) && func_59(1, 0, 1))) || bLocal_117)
			{
				switch (iLocal_48)
				{
					case 0:
						unk_0x0A8175F24237A3D4(&uLocal_319);
						if (!bLocal_117)
						{
							Local_66 = { Local_102 };
							if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
								{
									unk_0xE4DF2496E641851E(unk_0x2ADE2CEED2637E95(), 10.5f, 4, 0);
								}
							}
							if (!unk_0x930F8FBB8E9537CC(iLocal_58))
							{
								iVar2 = unk_0x60FC347BF9CAD1BD();
								if (iVar2 != 0)
								{
									iVar3 = unk_0x7FCE6803A3D23268(iVar2);
									if (iVar3 == 4)
									{
										unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_54, 5000, 0, 2);
									}
									else
									{
										unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_58, 5000, 2052, 4);
										unk_0xE7B81FA5331B1559(iLocal_58, 0f, 0f, 0f, 1, -1, 3000, 2000);
									}
								}
							}
							func_21();
							if (!func_64())
							{
								func_4(&uLocal_135, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!unk_0x5FEB513A4402FD59(iLocal_54))
								{
									unk_0x27CC98B7C879C320(iLocal_54);
									unk_0xEAD984C2869B8B7C(&uLocal_112);
									unk_0xD91194CE3D1E1D77(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0xD91194CE3D1E1D77(0, Local_98, 3f, 20000, 1048576000, 0, 1193033728);
									unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), -1);
									unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2048, 2);
									unk_0x56D9ED1541046AF6(uLocal_112);
									unk_0xC65002CAA1212AF9(iLocal_54, uLocal_112);
									unk_0xA3561415EB3DA3A3(&uLocal_112);
									unk_0x6CB332CB31E9FA96(iLocal_54, 1);
								}
								bLocal_117 = true;
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						if (!unk_0x5FEB513A4402FD59(iLocal_54) && !unk_0x930F8FBB8E9537CC(iLocal_58))
						{
							if ((bLocal_117 && unk_0x515B65C19A5CA9B1(iLocal_54, Local_98, 1f, 1f, 1f, 0, 1, 0)) && !unk_0xE5AB05962FA1FF3F(iLocal_54, 0))
							{
								if (unk_0xCD67A1A6022640ED(iLocal_54))
								{
									if (!func_64())
									{
										if (func_11() == 2)
										{
											func_4(&uLocal_135, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									unk_0x6EC15FE0ADD3E99C(iLocal_54);
								}
								if (unk_0x895C275673BCEAB0(iLocal_54))
								{
									if (!unk_0x5FEB513A4402FD59(iLocal_54))
									{
										unk_0xABA9860C0161F3CD(iLocal_54, 0);
										unk_0x5CEA5F12775261F2(iLocal_54, 0, 0);
										unk_0x210A4A0B257F8433(iLocal_54, 1);
										unk_0xA8F22633ACC22189(iLocal_54, 1);
									}
									if (unk_0x83666F9FB8FEBD4B() > 15000)
									{
										if (!unk_0x5FEB513A4402FD59(iLocal_54))
										{
											unk_0x03F73D35E5AC583A(iLocal_54, 2, 1, 0, 0);
											unk_0x03F73D35E5AC583A(iLocal_54, 0, 0, 1, 0);
											unk_0x03F73D35E5AC583A(iLocal_54, 3, 1, 0, 0);
											unk_0x03F73D35E5AC583A(iLocal_54, 4, 1, 0, 0);
											unk_0x03F73D35E5AC583A(iLocal_54, 11, 0, 0, 0);
											unk_0xABA9860C0161F3CD(iLocal_54, 1);
											unk_0x5CEA5F12775261F2(iLocal_54, 1, 0);
											unk_0x210A4A0B257F8433(iLocal_54, 0);
											unk_0xA8F22633ACC22189(iLocal_54, 0);
											unk_0xB067093BBAF0A747(iLocal_54, Local_98, 1, 0, 0, 1);
											unk_0xC24172029826A66F(iLocal_54, 106.5078f);
											unk_0x2DA3CE5ACB2F30AC(iLocal_54, 0);
											unk_0x4B9FA68A3AC8C29D(iLocal_54, 17, 1);
											unk_0x784BAC3CB31D962D(iLocal_54, 1);
											unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_54, -1, 2048, 4);
											if (!unk_0x930F8FBB8E9537CC(iLocal_58))
											{
												unk_0xEAD984C2869B8B7C(&uLocal_112);
												unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 4);
												unk_0x3C3A95141D01773E(0, iLocal_58, -1, 0, 2f, 1, 0);
												unk_0x56D9ED1541046AF6(uLocal_112);
												unk_0xC65002CAA1212AF9(iLocal_54, uLocal_112);
												unk_0xA3561415EB3DA3A3(&uLocal_112);
											}
										}
										unk_0xC1B1E9A034A63A62(0);
										Local_66 = { Local_102 };
										Local_69 = { Local_105 };
										Local_72 = { Local_108 };
										fLocal_75 = fLocal_111;
										iLocal_48 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x5FEB513A4402FD59(iLocal_54) && !unk_0x930F8FBB8E9537CC(iLocal_58))
						{
							if (unk_0x8D28631AAAEFC957(iLocal_54, iLocal_58, 5f, 5f, 5f, 0, 1, 0) && !iLocal_127)
							{
								func_4(&uLocal_135, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_127 = 1;
							}
							if (unk_0xE5AB05962FA1FF3F(iLocal_54, 0))
							{
								if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_58, 0))
								{
									if (func_4(&uLocal_135, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_48 = 2;
										bLocal_117 = false;
										iLocal_129 = 0;
									}
								}
								else
								{
									if (iLocal_307 == 0)
									{
										iLocal_307 = unk_0x48E480685981C7D4();
									}
									if (iLocal_307 != 0 && unk_0x48E480685981C7D4() > iLocal_307 + 6000)
									{
										func_4(&uLocal_135, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_307 = 0;
									}
									unk_0xC1B1E9A034A63A62(0);
								}
							}
						}
						break;
					
					case 2:
						if (!bLocal_117)
						{
							func_21();
							if (func_4(&uLocal_135, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
								{
									if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
									{
										iLocal_131 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
										unk_0xE4DF2496E641851E(unk_0x2ADE2CEED2637E95(), 10.5f, 2, 0);
									}
								}
								if (!unk_0x5FEB513A4402FD59(iLocal_56) && !unk_0x5FEB513A4402FD59(iLocal_54))
								{
									if (unk_0xE5AB05962FA1FF3F(iLocal_54, 0))
									{
										iLocal_131 = unk_0xE68E6B44DABA9C05(iLocal_54, 0);
										unk_0xEAD984C2869B8B7C(&uLocal_112);
										unk_0x3C3A95141D01773E(0, iLocal_131, -1, 2, 1f, 1, 0);
										unk_0xF64D185C5B88AF31(0);
										unk_0x56D9ED1541046AF6(uLocal_112);
										unk_0xC65002CAA1212AF9(iLocal_56, uLocal_112);
										unk_0xCE566DBDCACD245E(iLocal_56, 185, 0);
									}
									else
									{
										unk_0x65C82688BA49CA39(iLocal_56, iLocal_54, -1, 8f, 1073741824, 1073741824, 0);
									}
									if (!unk_0xFBACB273AA628CC5(uLocal_321))
									{
										uLocal_321 = func_63(iLocal_56, 0, 145);
									}
									if (unk_0xFBACB273AA628CC5(uLocal_319))
									{
										unk_0x0A8175F24237A3D4(&uLocal_319);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_119 = 1;
								bLocal_117 = true;
							}
						}
						if (bLocal_117 && !unk_0x5FEB513A4402FD59(iLocal_54))
						{
							if (unk_0xFA1212DE7C455679(iLocal_54, 242628503) == 7 || unk_0x83666F9FB8FEBD4B() > 12000)
							{
								Local_66 = { Local_76 };
								Local_69 = { Local_79 };
								Local_72 = { Local_82 };
								fLocal_75 = fLocal_85;
								unk_0x32A12757CBF48A33(joaat("ig_bride"));
								unk_0x32A12757CBF48A33(joaat("washington"));
								unk_0x32A12757CBF48A33(joaat("baller2"));
								unk_0x32A12757CBF48A33(joaat("primo"));
								if (((unk_0x33ACB874CECA2D4B(joaat("ig_bride")) && unk_0x33ACB874CECA2D4B(joaat("washington"))) && unk_0x33ACB874CECA2D4B(joaat("baller2"))) && unk_0x33ACB874CECA2D4B(joaat("primo")))
								{
									iLocal_55 = unk_0x206897C6DBC12488(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
									unk_0x1D15D99A10A15334(iLocal_55, 1);
									unk_0xEAD984C2869B8B7C(&uLocal_112);
									unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), -1);
									unk_0x56D9ED1541046AF6(uLocal_112);
									unk_0xC65002CAA1212AF9(iLocal_55, uLocal_112);
									unk_0xA3561415EB3DA3A3(&uLocal_112);
									iLocal_57 = unk_0x206897C6DBC12488(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, 1, 1);
									unk_0x1D15D99A10A15334(iLocal_57, 1);
									unk_0xF88735A9354A45F3(iLocal_57, unk_0x81873881071CD9FE(), -1);
									unk_0x03F73D35E5AC583A(iLocal_57, 0, 1, 0, 0);
									uLocal_59[0] = unk_0xE00F8DEA9778FC87(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, 1, 1);
									uLocal_59[1] = unk_0xE00F8DEA9778FC87(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, 1, 1);
									uLocal_59[2] = unk_0xE00F8DEA9778FC87(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, 1, 1);
									uLocal_59[3] = unk_0xE00F8DEA9778FC87(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, 1, 1);
									unk_0xFD021BAF9614D437(uLocal_59[0], unk_0x2E0A9E3291F398E3(0, 127), 0);
									unk_0xFD021BAF9614D437(uLocal_59[1], unk_0x2E0A9E3291F398E3(0, 127), 0);
									unk_0xFD021BAF9614D437(uLocal_59[2], unk_0x2E0A9E3291F398E3(0, 127), 0);
									unk_0xFD021BAF9614D437(uLocal_59[3], unk_0x2E0A9E3291F398E3(0, 127), 0);
									iLocal_48 = 3;
									bLocal_117 = false;
									iLocal_129 = 0;
								}
							}
						}
						break;
					
					case 3:
						if (!bLocal_117)
						{
							if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
								{
									unk_0xE4DF2496E641851E(unk_0x2ADE2CEED2637E95(), 10.5f, 2, 0);
									bLocal_117 = true;
									unk_0x4EDE34FBADD967A6(3000);
									func_21();
									unk_0x4EDE34FBADD967A6(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (unk_0x930F8FBB8E9537CC(iLocal_54))
		{
			func_176();
		}
	}
}

void func_89(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_90()
{
	if ((iLocal_309 && iLocal_306 != func_73(func_74())) && !unk_0x42E36F2D658EB2FF(uLocal_133))
	{
		func_94(((iLocal_306 * 1000 * 60 - func_73(func_74()) * 1000 * 60) + (iLocal_305 * 1000 - func_97(func_74()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iLocal_305 == 0)
	{
		if (iLocal_306 == func_73(func_74()) + 1 && ((((iLocal_305 == (func_97(func_74()) - 55) || iLocal_305 == (func_97(func_74()) - 56)) || iLocal_305 == (func_97(func_74()) - 57)) || iLocal_305 == (func_97(func_74()) - 58)) || iLocal_305 == (func_97(func_74()) - 59)))
		{
			func_93();
		}
	}
	if (iLocal_306 == func_73(func_74()))
	{
		func_93();
		func_91();
		if (!func_64())
		{
			func_4(&uLocal_135, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!unk_0x5FEB513A4402FD59(iLocal_54))
			{
				unk_0xA0E7F565B88CC79B(iLocal_54, 1, 1);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_55))
			{
				unk_0x754376E2234CBB4A(iLocal_55, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_57))
			{
				unk_0x754376E2234CBB4A(iLocal_57, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
			}
			unk_0x4EDE34FBADD967A6(8500);
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
				{
					unk_0xE4DF2496E641851E(unk_0x2ADE2CEED2637E95(), 10.5f, 3, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2000);
			if (!unk_0x930F8FBB8E9537CC(iLocal_54))
			{
				unk_0x27CC98B7C879C320(iLocal_54);
				unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_54, 5000, 2048, 2);
				unk_0xAF625598EDA64AD3(iLocal_54, unk_0x81873881071CD9FE(), 5000, 2048, 2);
				unk_0x98046F3D16B9CF76(iLocal_54, 0, 0);
				unk_0x6EC15FE0ADD3E99C(iLocal_54);
			}
			if (!unk_0x930F8FBB8E9537CC(iLocal_56))
			{
				unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_54, 5000, 0, 2);
				unk_0x98046F3D16B9CF76(iLocal_56, 500, 0);
			}
			unk_0x4EDE34FBADD967A6(1000);
			if (!unk_0x930F8FBB8E9537CC(iLocal_58))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_58, 0))
				{
					unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 0, 0);
				}
			}
			if (!unk_0x930F8FBB8E9537CC(iLocal_54) && !unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_112);
				if (unk_0x2ADE2CEED2637E95() == iLocal_58)
				{
					unk_0x3C3A95141D01773E(0, iLocal_58, -1, -1, 1f, 8, 0);
					unk_0xEFACB1875068FA30(0, iLocal_58, unk_0x81873881071CD9FE(), 8, 15f, 786469, 10f, 10f, 1);
				}
				else
				{
					unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
				}
				unk_0x56D9ED1541046AF6(uLocal_112);
				unk_0xC65002CAA1212AF9(iLocal_54, uLocal_112);
				unk_0xA3561415EB3DA3A3(&uLocal_112);
				unk_0x6CB332CB31E9FA96(iLocal_54, 1);
				if (!unk_0x930F8FBB8E9537CC(iLocal_56))
				{
					unk_0xEAD984C2869B8B7C(&uLocal_112);
					if (unk_0x2ADE2CEED2637E95() == iLocal_58)
					{
						unk_0x3C3A95141D01773E(0, iLocal_58, -1, 0, 2f, 1, 0);
						unk_0x5EAAD72695348E00(0, 100000);
					}
					else
					{
						unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
					}
					unk_0x56D9ED1541046AF6(uLocal_112);
					unk_0xC65002CAA1212AF9(iLocal_56, uLocal_112);
					unk_0xA3561415EB3DA3A3(&uLocal_112);
					unk_0x6CB332CB31E9FA96(iLocal_56, 1);
				}
			}
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			while (func_64())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_2();
		}
	}
}

void func_91()
{
	Global_14559 = 0;
	func_92();
}

void func_92()
{
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x0C937048CF6952B5();
	iVar1 = unk_0x25B31B877207A3A9();
	iVar2 = unk_0xBF0A1447DA6AE4B5();
	if (iLocal_308 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_306)
		{
			unk_0x35D7948F61AA3FEC(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_96(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_95(7, iVar0);
		Global_1336084.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = iParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = iParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = iParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_95(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_96(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

int func_97(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

void func_98()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_58) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (unk_0x04C377C10639B842(iLocal_54, iLocal_58, 0) && unk_0x03CF5B18BF9EC613(iLocal_58))
			{
				if (!func_64())
				{
					if (func_99())
					{
						func_4(&uLocal_135, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_135, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (unk_0x04C377C10639B842(iLocal_54, unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0) && unk_0x03CF5B18BF9EC613(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
			{
				if (!func_64())
				{
					func_4(&uLocal_135, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_99()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		unk_0x50C24260EFF2A0DE(iLocal_54, 0);
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_56))
	{
		unk_0x50C24260EFF2A0DE(iLocal_56, 0);
	}
	if (((((unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), 4f, 4f, 4f, 0, 1, 0) || iLocal_48 == 1) || iLocal_125) || iLocal_126) || iLocal_124) || bLocal_117)
	{
		if ((((((iLocal_48 >= 2 && iLocal_119) && iLocal_48 != 1) && !iLocal_125) && !iLocal_126) && !iLocal_124) && !bLocal_117)
		{
			if (unk_0x8D28631AAAEFC957(iLocal_56, unk_0x81873881071CD9FE(), 4f, 4f, 4f, 0, 1, 0))
			{
				if (func_102())
				{
					func_101(0);
				}
			}
			else if (func_64() && !func_102())
			{
				func_101(1);
			}
		}
		else if (func_102())
		{
			func_101(0);
		}
	}
	else if (func_64() && !func_102())
	{
		func_101(1);
	}
}

void func_101(int iParam0)
{
	Global_16704 = iParam0;
}

int func_102()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	if ((unk_0x0C937048CF6952B5() > 2 && unk_0x0C937048CF6952B5() < 15) && !unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
	{
	}
	else
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			unk_0x27CC98B7C879C320(iLocal_54);
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_4(&uLocal_135, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (unk_0x86CCCD2FAE9D5E65(iLocal_65))
			{
				unk_0xD88DD5B581458979(iLocal_65, 1, 1);
			}
		}
		while (func_64())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_2();
	}
}

void func_104()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (!iLocal_114)
		{
			if ((unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 130f, 60f, 50f, 0, 1, 0) && !unk_0x895C275673BCEAB0(iLocal_54)) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_320))
				{
					uLocal_320 = func_63(iLocal_54, 0, 145);
					unk_0x3C8D013C840ADA0A(uLocal_320, 0);
					unk_0xAF625598EDA64AD3(iLocal_54, unk_0x81873881071CD9FE(), -1, 2052, 4);
				}
				if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
				{
					if (unk_0xFBACB273AA628CC5(uLocal_320))
					{
						unk_0x3C8D013C840ADA0A(uLocal_320, 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					func_91();
					while (func_64())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!func_64())
					{
						if (func_11() == 0)
						{
							func_4(&uLocal_135, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_11() == 1)
						{
							func_4(&uLocal_135, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_11() == 2)
						{
							func_4(&uLocal_135, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_114 = 1;
				}
			}
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !unk_0x5FEB513A4402FD59(iLocal_54))
			{
				if ((!func_142() && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && unk_0xFBACB273AA628CC5(uLocal_320))
				{
					if (!func_64())
					{
						func_4(&uLocal_135, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
					{
						iLocal_64 = unk_0x2ADE2CEED2637E95();
					}
					func_105(1);
				}
			}
		}
		else if (!iLocal_300)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_54))
			{
				if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 25f, 25f, 25f, 0, 1, 0))
				{
					func_21();
					unk_0x4EDE34FBADD967A6(0);
					func_4(&uLocal_135, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_300 = 1;
				}
			}
		}
	}
}

int func_105(int iParam0)
{
	if (func_109())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_39(Global_98920))
		{
			func_106(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_39(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
		}
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_107(func_108(iParam0), -1);
					Global_98931.f_29444.f_2++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 1))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_107(func_108(iParam0), -1);
					Global_98931.f_29444.f_3++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 2))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_107(func_108(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
				}
			}
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(uParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

char* func_108(int iParam0)
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

int func_109()
{
	switch (func_110(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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

int func_110(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88620.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_114(0))
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_112(iParam2))
		{
			return 0;
		}
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
		if (iParam4 != 0)
		{
			func_111(uParam0, iParam4);
		}
	}
	return 2;
}

void func_111(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_112(int iParam0)
{
	return func_113(iParam0, Global_35443);
}

int func_113(int iParam0, int iParam1)
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

int func_114(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_112(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_115()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_54))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			if (unk_0xF46EAA2C25D08B6F(-1, unk_0xB6AE0DAE06D56288(iLocal_54, 1), 3f))
			{
				unk_0x1E2B48EE3EC55DCF(iLocal_54);
				unk_0x9765BF567DB87B5F(iLocal_54, 99);
			}
			if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
			{
				if (unk_0xA04824262F150982(unk_0x2ADE2CEED2637E95()) < 3f)
				{
					unk_0xA8F22633ACC22189(iLocal_54, 1);
				}
				else
				{
					unk_0xA8F22633ACC22189(iLocal_54, 0);
					if (unk_0xB454AC819016CE5E(unk_0x2ADE2CEED2637E95(), iLocal_54))
					{
						unk_0x1E2B48EE3EC55DCF(iLocal_54);
						unk_0x9765BF567DB87B5F(iLocal_54, 99);
					}
				}
			}
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 2f, 2f, 2f, 0, 1, 0))
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if (func_59(1, 0, 1))
					{
						if (!iLocal_310)
						{
							func_105(1);
							func_52(1, 1, 1, 0);
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
							unk_0x30407CDA9AA59737(unk_0x81873881071CD9FE(), 1);
							unk_0xB8BB626315D394F5(1);
							unk_0xF1BC58601CA4A5C7(0);
							unk_0x3BF4F473786B0150(0);
							if (!unk_0x5FEB513A4402FD59(iLocal_54))
							{
								unk_0x7C6BF0CD5D7454C9(unk_0xB6AE0DAE06D56288(iLocal_54, 1), 5f, 1, 0, 0, 0);
								unk_0x9FDA5C65BF0EE91F(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 5f);
							}
							if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
							{
								if (unk_0x8D28631AAAEFC957(unk_0x2ADE2CEED2637E95(), iLocal_54, 5f, 5f, 5f, 0, 1, 0))
								{
									unk_0xB067093BBAF0A747(unk_0x2ADE2CEED2637E95(), unk_0xB6AE0DAE06D56288(iLocal_54, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									unk_0x5CC9D6711FE01F0D(unk_0x2ADE2CEED2637E95());
								}
							}
							if (!unk_0x5FEB513A4402FD59(iLocal_54))
							{
								uLocal_317 = unk_0x59C061A719024602(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								uLocal_133 = unk_0xAAC4D4F273757469("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x176AAFA85E979842(uLocal_317, 0.158f);
								unk_0xC813152833B59518(uLocal_133, uLocal_317, "untie_cam", "re@stag_do@");
								unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
								unk_0x1E2B48EE3EC55DCF(iLocal_54);
								unk_0x58BEA8B2364F8C48(iLocal_54, uLocal_317, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								unk_0x95BE9BA77CA91710(iLocal_54, 0, 0);
								unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uLocal_317, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
								unk_0xDD0B0D77CB8995B1(uLocal_133, 1);
								unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
								iLocal_310 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_310 && !iLocal_312)
	{
		func_21();
		unk_0x4EDE34FBADD967A6(0);
		if (func_11() == 0)
		{
			func_4(&uLocal_135, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_11() == 1)
		{
			func_4(&uLocal_135, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_11() == 2)
		{
			func_4(&uLocal_135, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_312 = 1;
	}
	if (iLocal_310 && !iLocal_311)
	{
		if (!iLocal_315)
		{
			if (unk_0xF855C83E3A17514B(uLocal_317) > 0.2f && unk_0xF855C83E3A17514B(uLocal_317) < 0.3f)
			{
				unk_0x058526005957A956(-1, "ROPE_CUT", unk_0x81873881071CD9FE(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_315 = 1;
			}
		}
		if (unk_0xF855C83E3A17514B(uLocal_317) > 0.4647059f && !iLocal_316)
		{
			if (unk_0x4D872223E3957144() == 4)
			{
				unk_0x45D2AAD93E9AC4B3("CamPushInNeutral", 0, 0);
				unk_0x35D7948F61AA3FEC(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_316 = 1;
			}
		}
		if (unk_0xF855C83E3A17514B(uLocal_317) > 0.5f)
		{
			iLocal_311 = 1;
		}
		if (func_116(1000))
		{
			unk_0x3B283FEBA87FFBEB(800);
			while (unk_0xC584A413BCB2AA39())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_311 = 1;
			iLocal_314 = 1;
		}
	}
	if (iLocal_311 && !iLocal_313)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_65))
		{
			unk_0xD88DD5B581458979(iLocal_65, 1, 1);
		}
		unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
		unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 208.4017f);
		unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
		unk_0xDD0B0D77CB8995B1(uLocal_133, 0);
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
		unk_0x35B958B469415A23(uLocal_133, 0);
		unk_0x270066FDBAF3A458(0f);
		unk_0xEAB527164AD92BF3(-7f, 1065353216);
		func_52(0, 1, 1, 0);
		unk_0x30407CDA9AA59737(unk_0x81873881071CD9FE(), 0);
		unk_0xF1BC58601CA4A5C7(1);
		unk_0x3BF4F473786B0150(1);
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			unk_0xA8F22633ACC22189(iLocal_54, 0);
			unk_0x1E2B48EE3EC55DCF(iLocal_54);
			unk_0x1BFA331FECEC4F68(iLocal_54, 1);
			unk_0xB067093BBAF0A747(iLocal_54, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			unk_0xC24172029826A66F(iLocal_54, 136.9073f);
			unk_0x95BE9BA77CA91710(iLocal_54, 0, 0);
		}
		if (iLocal_314)
		{
			unk_0xAE2B1C30F8A0B67C(800);
			while (unk_0xC11AD1609CFCCCE1())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_314 = 0;
		}
		iLocal_316 = 0;
		iLocal_313 = 1;
	}
	if (iLocal_313 && !unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (unk_0x7404950238A154C2(unk_0x2ADE2CEED2637E95(), 0))
		{
			if ((((((unk_0x8D28631AAAEFC957(iLocal_54, unk_0x2ADE2CEED2637E95(), 20f, 20f, 20f, 0, 1, 0) && unk_0x59D35AC211D17FAB(unk_0x2ADE2CEED2637E95()) >= 1) && !unk_0x9F59BCFFFEAAD4B1(unk_0x14B7103DBD149FFE(unk_0x2ADE2CEED2637E95()))) && !unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(unk_0x2ADE2CEED2637E95()))) && !unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(unk_0x2ADE2CEED2637E95()))) && !unk_0xE4CD4B212196D2C5(unk_0x14B7103DBD149FFE(unk_0x2ADE2CEED2637E95()))) && unk_0x14B7103DBD149FFE(unk_0x2ADE2CEED2637E95()) != joaat("rhino"))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_112);
				unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 10000, 2048, 3);
				unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 6500);
				unk_0x3C3A95141D01773E(0, unk_0x2ADE2CEED2637E95(), -1, 0, 1f, 1, 0);
				unk_0x56D9ED1541046AF6(uLocal_112);
				unk_0xC65002CAA1212AF9(iLocal_54, uLocal_112);
				unk_0xA3561415EB3DA3A3(&uLocal_112);
			}
			else if (!unk_0xCD67A1A6022640ED(iLocal_54))
			{
				unk_0xABED360AB1F46D3D(iLocal_54, func_66());
				unk_0x64ACA71A49AA111C(iLocal_54, 1);
				unk_0x2DA3CE5ACB2F30AC(iLocal_54, 0);
			}
		}
		else if (!unk_0xCD67A1A6022640ED(iLocal_54))
		{
			unk_0xABED360AB1F46D3D(iLocal_54, func_66());
			unk_0x64ACA71A49AA111C(iLocal_54, 1);
			unk_0x2DA3CE5ACB2F30AC(iLocal_54, 0);
		}
		unk_0x1D15D99A10A15334(iLocal_54, 0);
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
		uLocal_319 = func_23(Local_66, 1);
		iLocal_113 = 1;
		bLocal_115 = true;
		unk_0xD8323B49BAE93D80("re@stag_do@");
		unk_0xD8323B49BAE93D80("re@stag_do@idle_a");
		iLocal_304 = func_73(func_74());
		iLocal_306 = iLocal_304 + 5;
		iLocal_303 = func_97(func_74());
		if (iLocal_303 >= 30)
		{
			iLocal_305 = 0;
			iLocal_306++;
		}
		if (iLocal_306 > 24)
		{
			iLocal_306 = (iLocal_306 - 24);
		}
		if (iLocal_306 == 0)
		{
			sLocal_301 = "stagd_ptime0";
		}
		else if (iLocal_306 == 1)
		{
			sLocal_301 = "stagd_ptime1";
		}
		else if (iLocal_306 == 2)
		{
			sLocal_301 = "stagd_ptime2";
		}
		else if (iLocal_306 == 3)
		{
			sLocal_301 = "stagd_ptime3";
		}
		else if (iLocal_306 == 4)
		{
			sLocal_301 = "stagd_ptime4";
		}
		else if (iLocal_306 == 5)
		{
			sLocal_301 = "stagd_ptime5";
		}
		else if (iLocal_306 == 6)
		{
			sLocal_301 = "stagd_ptime6";
		}
		else if (iLocal_306 == 7)
		{
			sLocal_301 = "stagd_ptime7";
		}
		else if (iLocal_306 == 8)
		{
			sLocal_301 = "stagd_ptime8";
		}
		else if (iLocal_306 == 9)
		{
			sLocal_301 = "stagd_ptime9";
		}
		else if (iLocal_306 == 10)
		{
			sLocal_301 = "stagd_ptim10";
		}
		else if (iLocal_306 == 11)
		{
			sLocal_301 = "stagd_ptim11";
		}
		else if (iLocal_306 == 12)
		{
			sLocal_301 = "stagd_ptim12";
		}
		else if (iLocal_306 == 13)
		{
			sLocal_301 = "stagd_ptim13";
		}
		else if (iLocal_306 == 14)
		{
			sLocal_301 = "stagd_ptim14";
		}
		else if (iLocal_306 == 15)
		{
			sLocal_301 = "stagd_ptim15";
		}
		else if (iLocal_306 == 16)
		{
			sLocal_301 = "stagd_ptim16";
		}
		else if (iLocal_306 == 17)
		{
			sLocal_301 = "stagd_ptim17";
		}
		else if (iLocal_306 == 18)
		{
			sLocal_301 = "stagd_ptim18";
		}
		else if (iLocal_306 == 19)
		{
			sLocal_301 = "stagd_ptim19";
		}
		else if (iLocal_306 == 20)
		{
			sLocal_301 = "stagd_ptim20";
		}
		else if (iLocal_306 == 21)
		{
			sLocal_301 = "stagd_ptim21";
		}
		else if (iLocal_306 == 22)
		{
			sLocal_301 = "stagd_ptim22";
		}
		else if (iLocal_306 == 23)
		{
			sLocal_301 = "stagd_ptim23";
		}
	}
}

int func_116(int iParam0)
{
	if (unk_0xECDEA377354CBDA4())
	{
		if ((unk_0x48E480685981C7D4() - Global_28) > iParam0)
		{
			Global_27 = unk_0x48E480685981C7D4();
		}
		Global_28 = unk_0x48E480685981C7D4();
		if ((unk_0x48E480685981C7D4() - Global_27) > iParam0)
		{
			if (func_117())
			{
				Global_27 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
	}
	return 0;
}

int func_117()
{
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (unk_0x093DEAE9A023FAA0(0, 18) || unk_0x093DEAE9A023FAA0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_118()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!unk_0xE86442941AE40E75(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
			{
				unk_0xD768713E73165208(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 1, 0);
			}
		}
		iLocal_132 = unk_0xE800E479A60822F5(unk_0xB6AE0DAE06D56288(iLocal_54, 0), 30f, 0, 4);
		if (!unk_0x930F8FBB8E9537CC(iLocal_132))
		{
			if (!unk_0xBEB00EB4ADDC2A33(iLocal_132, -1))
			{
				if (unk_0x8D28631AAAEFC957(iLocal_132, iLocal_54, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xD768713E73165208(iLocal_132, 1, 0);
					if (unk_0x7404950238A154C2(iLocal_132, 0))
					{
						unk_0xF5194DC958E2700A(iLocal_132, 3000, 0, 0);
						if (!unk_0x5FEB513A4402FD59(iLocal_54))
						{
							if (!func_64() && !iLocal_114)
							{
								func_4(&uLocal_135, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					unk_0xE0913C01F5C0CC3D(&iLocal_132);
				}
			}
		}
	}
}

void func_119()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		iVar0 = unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE());
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			iVar1 = unk_0xB0B9E53CEFDB16AA(iVar0, 0);
			if (!unk_0x5FEB513A4402FD59(iVar1))
			{
				if (iVar1 != unk_0x81873881071CD9FE())
				{
					if (unk_0xE86442941AE40E75(iVar1))
					{
						if (!unk_0x3E3058289D865B2D(iVar1, unk_0x81873881071CD9FE()))
						{
							unk_0xAF625598EDA64AD3(iVar1, unk_0x81873881071CD9FE(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_120()
{
	func_121(39, 1);
	func_121(40, 1);
	func_121(41, 1);
	func_121(42, 1);
	func_121(43, 1);
	func_121(44, 1);
	unk_0x32A12757CBF48A33(joaat("u_m_y_staggrm_01"));
	unk_0x32A12757CBF48A33(joaat("superd"));
	unk_0x32A12757CBF48A33(joaat("prop_stag_do_rope"));
	while ((!unk_0x33ACB874CECA2D4B(joaat("u_m_y_staggrm_01")) || !unk_0x33ACB874CECA2D4B(joaat("superd"))) || !unk_0x33ACB874CECA2D4B(joaat("prop_stag_do_rope")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x295DC04FC13E025B("re@stag_do@");
	unk_0x295DC04FC13E025B("re@stag_do@idle_a");
	unk_0x9D2B95F4020E5347("ROPE_CUT", 0);
	while ((!unk_0x8E8B546E1A81D27F("re@stag_do@") || !unk_0x8E8B546E1A81D27F("re@stag_do@idle_a")) || !unk_0x9D2B95F4020E5347("ROPE_CUT", 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_54 = unk_0x206897C6DBC12488(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	unk_0xEF1A2C5B3EE83E3E(iLocal_54, "GROOM");
	unk_0x506A601663C5417C(iLocal_54, joaat("player"));
	unk_0x1D15D99A10A15334(iLocal_54, 1);
	unk_0x0CD6B65135C8C3FE(iLocal_54, 0);
	unk_0x03F73D35E5AC583A(iLocal_54, 2, 0, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_54, 0, 0, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_54, 3, 0, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_54, 4, 0, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_54, 11, 1, 0, 0);
	unk_0x9799398C54875B4E(iLocal_54, joaat("empty"));
	unk_0xA97FB3A1E6744863(iLocal_54, 3);
	unk_0xCE566DBDCACD245E(iLocal_54, 206, 1);
	unk_0xCE566DBDCACD245E(iLocal_54, 134, 1);
	iLocal_65 = unk_0xF364195A57BB7AE3(joaat("prop_stag_do_rope"), unk_0xB6AE0DAE06D56288(iLocal_54, 1), 1, 1, 0);
	unk_0x75F9EE7629363312(iLocal_65, iLocal_54, unk_0xDED1B3B1138F742B(iLocal_54, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iLocal_58 = unk_0xE00F8DEA9778FC87(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0);
	unk_0x50C9C2E3327FDF31(iLocal_58, 1);
	unk_0xA0E7470F98EF901A(iLocal_58, 0f);
	unk_0xC390A6485FB80923(iLocal_58, 3);
	unk_0xF196EBA065B17452(iLocal_58, 0);
	unk_0x1E76E6EF3152227A(iLocal_58, 0, 73, 0);
	unk_0x9508ECCC5449FBFA(iLocal_58, 2, 48);
	unk_0x323720FEE81B53C0(iLocal_58, 11, 1, 0);
	unk_0x323720FEE81B53C0(iLocal_58, 12, 1, 0);
	unk_0xEE7F8F35078C057B(joaat("superd"), 3);
	unk_0x6927F8C100125A71(iLocal_58, 10000);
	unk_0x85E44521CE3FDFD4(iLocal_58, 5f);
	unk_0x7DB4FC1A893751E2(iLocal_58);
	Local_76 = { -352.88f, 6164.31f, 30.5f };
	Local_79 = { -355.2565f, 6164.931f, 30.2944f };
	Local_82 = { -330.5575f, 6139.852f, 34.4886f };
	fLocal_85 = 25.375f;
	Local_86 = { -343.5804f, 6156.198f, 30.489f };
	Local_89 = { -1991.126f, 457.991f, 101.1808f };
	Local_92 = { -2002.69f, 460.539f, 99.828f };
	Local_95 = { -1997.605f, 445.6651f, 105.0519f };
	Local_98 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_101 = 24.6875f;
	Local_102 = { -2205.351f, 4298.79f, 47.265f };
	Local_105 = { -2207.525f, 4301.697f, 47.1803f };
	Local_108 = { -2195.637f, 4295.407f, 51.1889f };
	fLocal_111 = 12.5625f;
	Local_66 = { Local_89 };
	Local_69 = { Local_92 };
	Local_72 = { Local_95 };
	fLocal_75 = fLocal_101;
	unk_0xB5A91586385F755B(joaat("superd"), 1);
	unk_0x3DD1ED742E99F292(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x13705C66F125D98D(Local_86 - Vector(20f, 20f, 20f), Local_86 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x13705C66F125D98D(unk_0xB6AE0DAE06D56288(iLocal_54, 0) - Vector(10f, 10f, 10f), unk_0xB6AE0DAE06D56288(iLocal_54, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x13705C66F125D98D(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	unk_0x13705C66F125D98D(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	unk_0x984F8E3A66FFFEE5(unk_0xB6AE0DAE06D56288(iLocal_54, 1), 10f, 0);
	if (!unk_0x930F8FBB8E9537CC(iLocal_54))
	{
		unk_0xEAD984C2869B8B7C(&uLocal_112);
		unk_0x31C1393E4ACFD794(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x56D9ED1541046AF6(uLocal_112);
		unk_0xC65002CAA1212AF9(iLocal_54, uLocal_112);
		unk_0xA3561415EB3DA3A3(&uLocal_112);
		unk_0x6CB332CB31E9FA96(iLocal_54, 1);
	}
	if (func_11() == 0)
	{
		func_89(&uLocal_135, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1)
	{
		func_89(&uLocal_135, 0, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2)
	{
		func_89(&uLocal_135, 0, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
	}
	func_89(&uLocal_135, 3, iLocal_54, "GROOM", 0, 1);
	iLocal_49 = 1;
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_128(iParam0, 2, 1))
		{
			func_127(iParam0, 2, 1);
		}
	}
	else if (func_128(iParam0, 2, 1))
	{
		func_122(iParam0, 2, 1);
	}
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_34() == 0)
		{
			uVar0 = func_125(func_126(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_123(func_126(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
	}
}

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_124(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

void func_127(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_34() == 0)
		{
			uVar0 = func_125(func_126(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_123(func_126(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_128(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_34() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_125(func_126(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_129()
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_136())
	{
		return 1;
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_130(float fParam0, bool bParam1)
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_44();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_131(iVar32, &Var0);
					fVar35 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var0.f_6, 1);
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

void func_131(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_132(uParam1, "Abigail1", func_134(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 1:
			func_132(uParam1, "Abigail2", func_134(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 2:
			func_132(uParam1, "Barry1", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 3:
			func_132(uParam1, "Barry2", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 4:
			func_132(uParam1, "Barry3", func_134(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 5:
			func_132(uParam1, "Barry3A", func_134(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 6:
			func_132(uParam1, "Barry3C", func_134(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 7:
			func_132(uParam1, "Barry4", func_134(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_133(iParam0), 0, 0);
			break;
		
		case 8:
			func_132(uParam1, "Dreyfuss1", func_134(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 9:
			func_132(uParam1, "Epsilon1", func_134(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 10:
			func_132(uParam1, "Epsilon2", func_134(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 11:
			func_132(uParam1, "Epsilon3", func_134(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 12:
			func_132(uParam1, "Epsilon4", func_134(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 13:
			func_132(uParam1, "Epsilon5", func_134(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 14:
			func_132(uParam1, "Epsilon6", func_134(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 15:
			func_132(uParam1, "Epsilon7", func_134(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 16:
			func_132(uParam1, "Epsilon8", func_134(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 17:
			func_132(uParam1, "Extreme1", func_134(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 18:
			func_132(uParam1, "Extreme2", func_134(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 19:
			func_132(uParam1, "Extreme3", func_134(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 20:
			func_132(uParam1, "Extreme4", func_134(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 21:
			func_132(uParam1, "Fanatic1", func_134(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 22:
			func_132(uParam1, "Fanatic2", func_134(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 23:
			func_132(uParam1, "Fanatic3", func_134(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_133(iParam0), 0, 1);
			break;
		
		case 24:
			func_132(uParam1, "Hao1", func_134(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_133(iParam0), 0, 1);
			break;
		
		case 25:
			func_132(uParam1, "Hunting1", func_134(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 26:
			func_132(uParam1, "Hunting2", func_134(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 27:
			func_132(uParam1, "Josh1", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 28:
			func_132(uParam1, "Josh2", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 29:
			func_132(uParam1, "Josh3", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 30:
			func_132(uParam1, "Josh4", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 31:
			func_132(uParam1, "Maude1", func_134(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 32:
			func_132(uParam1, "Minute1", func_134(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 33:
			func_132(uParam1, "Minute2", func_134(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 34:
			func_132(uParam1, "Minute3", func_134(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 35:
			func_132(uParam1, "MrsPhilips1", func_134(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 36:
			func_132(uParam1, "MrsPhilips2", func_134(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 37:
			func_132(uParam1, "Nigel1", func_134(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 38:
			func_132(uParam1, "Nigel1A", func_134(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 39:
			func_132(uParam1, "Nigel1B", func_134(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 40:
			func_132(uParam1, "Nigel1C", func_134(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 41:
			func_132(uParam1, "Nigel1D", func_134(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 42:
			func_132(uParam1, "Nigel2", func_134(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 43:
			func_132(uParam1, "Nigel3", func_134(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 44:
			func_132(uParam1, "Omega1", func_134(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 45:
			func_132(uParam1, "Omega2", func_134(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 46:
			func_132(uParam1, "Paparazzo1", func_134(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 47:
			func_132(uParam1, "Paparazzo2", func_134(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 48:
			func_132(uParam1, "Paparazzo3", func_134(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 49:
			func_132(uParam1, "Paparazzo3A", func_134(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 50:
			func_132(uParam1, "Paparazzo3B", func_134(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 51:
			func_132(uParam1, "Paparazzo4", func_134(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 52:
			func_132(uParam1, "Rampage1", func_134(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 54:
			func_132(uParam1, "Rampage3", func_134(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 55:
			func_132(uParam1, "Rampage4", func_134(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 56:
			func_132(uParam1, "Rampage5", func_134(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 53:
			func_132(uParam1, "Rampage2", func_134(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 57:
			func_132(uParam1, "TheLastOne", func_134(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 58:
			func_132(uParam1, "Tonya1", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 59:
			func_132(uParam1, "Tonya2", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 60:
			func_132(uParam1, "Tonya3", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 61:
			func_132(uParam1, "Tonya4", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 62:
			func_132(uParam1, "Tonya5", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_132(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_133(int iParam0)
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

struct<2> func_134(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_135(iParam0) };
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_135(int iParam0)
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

int func_136()
{
	if (func_139() && !func_140())
	{
		return 1;
	}
	if (func_138() && func_137())
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_98649 > 0;
}

int func_138()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_140()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	if (!func_112(5))
	{
		return 1;
	}
	if (func_136())
	{
		return 1;
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	if ((Global_98920 == func_48() && unk_0x9284F36E422CA571()) && Global_98921)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_145(iParam0);
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_144();
}

void func_144()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xB5A91586385F755B(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)), 1);
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	}
}

void func_145(int iParam0)
{
	Global_98920 = iParam0;
}

int func_146(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135723)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_48();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_174())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
		{
			return 0;
		}
		if (func_29(0))
		{
			return 0;
		}
		if (func_136())
		{
			return 0;
		}
		if (func_173())
		{
			return 0;
		}
		if (Global_98920 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_130(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_172(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_171(func_11()) == 4 || func_171(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_170(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_169(Global_98931.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x48E480685981C7D4() - Global_98922) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_168())
		{
			return 0;
		}
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
		if (unk_0x9284F36E422CA571())
		{
			return 0;
		}
		if (!func_159(4))
		{
			return 0;
		}
		if (!func_112(5))
		{
			return 0;
		}
		if (func_158(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
		{
			if ((unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(377.153f, -717.567f, 10.0536f) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(320.9934f, 265.2515f, 82.1221f)) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_158(0, 0))
		{
			return 0;
		}
		if (Global_25092)
		{
			return 0;
		}
		if (func_172(30) && !func_158(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_11()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_157(iVar8))
				{
					if (func_148(iVar4))
					{
						if (!func_147(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
							{
								if (func_11() != iVar4)
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

bool func_147(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
	return func_149(iVar0);
}

int func_149(int iParam0)
{
	return func_150(iParam0, 1);
}

int func_150(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_157(iParam0))
	{
		return 0;
	}
	func_151(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_151(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_152(func_74(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_152(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_156(iParam0, iParam1))
	{
		iVar0 = func_81(iParam1);
		iVar1 = func_79(iParam0);
		iVar2 = (func_79(iParam0) - func_79(iParam1));
		iVar3 = (func_81(iParam0) - func_81(iParam1));
		iVar4 = (func_155(iParam0) - func_155(iParam1));
		iVar5 = (func_73(iParam0) - func_73(iParam1));
		iVar6 = (func_97(iParam0) - func_97(iParam1));
		iVar7 = (func_154(iParam0) - func_154(iParam1));
	}
	else
	{
		iVar0 = func_81(iParam0);
		iVar1 = func_79(iParam1);
		iVar2 = (func_79(iParam1) - func_79(iParam0));
		iVar3 = (func_81(iParam1) - func_81(iParam0));
		iVar4 = (func_155(iParam1) - func_155(iParam0));
		iVar5 = (func_73(iParam1) - func_73(iParam0));
		iVar6 = (func_97(iParam1) - func_97(iParam0));
		iVar7 = (func_154(iParam1) - func_154(iParam0));
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
		iVar4 = (iVar4 + func_78(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_153(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_153(float fParam0, float fParam1, float fParam2)
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

int func_154(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_155(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_157(iParam1) || !func_157(iParam0))
	{
		return 1;
	}
	iVar0 = func_79(iParam0);
	iVar1 = func_79(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_81(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_73(iParam0);
	iVar1 = func_73(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_97(iParam0);
	iVar1 = func_97(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
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
	iVar0 = func_154(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_97(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_73(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_79(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_81(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_155(iParam0);
	if (iVar5 < 1 || iVar5 > func_78(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_158(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				iVar0 = func_11();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_167()) || Global_97978) || Global_24948) || func_166()) || func_18(8, -1)) || func_165()) || func_164()) || func_163()) || func_162()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_167()) || Global_24948) || func_166()) || func_18(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_167()) || Global_97978) || Global_24948) || func_166()) || func_18(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_167()) || Global_97978) || Global_24948) || func_166()) || func_18(8, -1)) || func_165()) || func_164()) || func_162()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_167() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_18(8, -1)) || func_162()) || func_161()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_165()) || func_164()) || func_161()) || func_160())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_167()) || Global_24948) || func_166()) || func_18(8, -1)) || func_164()) || func_163()) || func_162()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_167()) || func_164()) || Global_97978) || Global_24948) || func_166()) || Global_36493) || func_18(8, -1)) || func_163()) || func_161()) || func_162()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_167()) || Global_97978) || Global_24948) || func_166()) || func_18(8, -1)) || func_163()) || func_161()) || func_165()) || func_164()) || func_162())
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

var func_160()
{
	return Global_90848.f_1;
}

int func_161()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_162()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_164()
{
	return Global_90861.f_297 > 0;
}

bool func_165()
{
	return Global_90861.f_296 > 0;
}

var func_166()
{
	return Global_1315892;
}

int func_167()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_168()
{
	func_10();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
{
	return func_156(func_74(), iParam0);
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
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

int func_171(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_98931.f_6302.f_919[iParam0];
}

bool func_172(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_174())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_173()
{
	int iVar0;
	
	if (Global_25096)
	{
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_174()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_176()
{
	if (iLocal_50)
	{
		func_208(0);
		unk_0x3DD1ED742E99F292(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x3C936873011FA97B();
		func_21();
		unk_0xD600F85196278A9D(unk_0x1329891157A54C63());
		if (!unk_0x930F8FBB8E9537CC(iLocal_64))
		{
			if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_64, 0) && !unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_64, 50f, 50f, 50f, 0, 1, 0))
			{
				func_188(iLocal_64, 0, 145);
			}
		}
		if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_86, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_54) && !unk_0x5FEB513A4402FD59(iLocal_56))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_112);
				unk_0xD91194CE3D1E1D77(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x95F2470F44364D4F(0, iLocal_56, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x56D9ED1541046AF6(uLocal_112);
				unk_0xC65002CAA1212AF9(iLocal_54, uLocal_112);
				unk_0xA3561415EB3DA3A3(&uLocal_112);
				unk_0xEAD984C2869B8B7C(&uLocal_112);
				unk_0xD91194CE3D1E1D77(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x95F2470F44364D4F(0, iLocal_54, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x56D9ED1541046AF6(uLocal_112);
				unk_0xC65002CAA1212AF9(iLocal_56, uLocal_112);
				unk_0xA3561415EB3DA3A3(&uLocal_112);
			}
		}
		unk_0xE0913C01F5C0CC3D(&iLocal_132);
		unk_0xE0913C01F5C0CC3D(&iLocal_58);
		if (!unk_0xE9D49B6420575D0A(unk_0x1329891157A54C63()))
		{
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			unk_0xCE566DBDCACD245E(iLocal_54, 317, 1);
			if (!unk_0xCB8B9E751036ECB2(iLocal_54))
			{
				unk_0xA8F22633ACC22189(iLocal_54, 0);
			}
			unk_0x6EC15FE0ADD3E99C(iLocal_54);
			unk_0x1D15D99A10A15334(iLocal_54, 0);
		}
		else if (unk_0x86CCCD2FAE9D5E65(iLocal_65))
		{
			unk_0xD88DD5B581458979(iLocal_65, 1, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_54);
		if (!unk_0x5FEB513A4402FD59(iLocal_56))
		{
			unk_0xCE566DBDCACD245E(iLocal_56, 317, 1);
			unk_0x1D15D99A10A15334(iLocal_56, 0);
		}
		unk_0x71A8BCA218722FA1(&iLocal_56);
		if (!unk_0x5FEB513A4402FD59(iLocal_55))
		{
			unk_0x1D15D99A10A15334(iLocal_55, 0);
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_57))
		{
			unk_0x1D15D99A10A15334(iLocal_57, 0);
		}
		unk_0x71A8BCA218722FA1(&iLocal_55);
	}
	func_177(-1);
	unk_0xC23A229F78DAD92A();
}

void func_177(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_142())
	{
		func_181(iParam0);
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_180(30000);
		StringCopy(&cVar0, func_179(Global_98920, 1), 64);
		if (func_47(Global_98920) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_98919, 64);
		}
		unk_0xAD4A8703D0E8206B(&cVar0, Global_98917, (unk_0x48E480685981C7D4() - Global_98918), 0);
	}
	else if (unk_0x236D8AD7EE179F46(Global_98927, 0) && Global_98931.f_29444.f_2 < 3)
	{
		unk_0xC69E84EBBD7166E6(&Global_98927, 0);
	}
	func_178(&Global_25005);
	Global_98921 = 0;
	func_145(-1);
}

void func_178(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

char* func_179(int iParam0, bool bParam1)
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

void func_180(int iParam0)
{
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
}

void func_181(int iParam0)
{
	func_182(iParam0, 0, func_187(iParam0));
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_74();
	func_185(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_184(iParam0, &uVar0);
	Var1 = { func_183(&uVar0) };
}

struct<16> func_183(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_97(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_154(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_155(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_81(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_79(*uParam0), 64);
	return Var0;
}

void func_184(int iParam0, var uParam1)
{
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
}

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_79(*uParam0);
	iVar1 = func_81(*uParam0);
	iVar2 = func_155(*uParam0);
	iVar3 = func_73(*uParam0);
	iVar4 = func_97(*uParam0);
	iVar5 = func_154(*uParam0);
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
	iVar6 = func_78(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_78(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_186(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, iParam1);
	func_83(uParam0, iParam2);
	func_82(uParam0, iParam3);
	func_76(uParam0, iParam5);
	func_77(uParam0, iParam4);
	func_75(uParam0, iParam6);
}

int func_187(int iParam0)
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

int func_188(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x9DE804DB82E9D0FC(iParam0, &uVar0);
		if (!unk_0xB318FDA0D1ABDB20(uVar1))
		{
			if (unk_0x8DAF7A748E41AD46(uVar1) == unk_0x8DAF7A748E41AD46("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_189(iParam0, iParam2);
	return 1;
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_194(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB0B9E53CEFDB16AA(iParam0, -1);
		if (!unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			iVar0 = unk_0x24E1D5759BFC6ECE(iParam0, -1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iVar0) && !unk_0x5FEB513A4402FD59(iVar0))
		{
			if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_98931.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_98931.f_18731.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_98931.f_18731.f_5590 = iParam1;
	Global_68794 = iParam0;
	Global_98931.f_18731.f_5588 = 1;
	func_190(iParam0, &(Global_98931.f_18731.f_5510));
}

void func_190(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_193(uParam1);
		uParam1->f_66 = unk_0x14B7103DBD149FFE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE0DCE5625B61B0CC(iParam0), 16);
		*uParam1 = unk_0xBF74E89FC6941108(iParam0);
		unk_0x1D3AAB0507DD3600(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x6942D519F6FE2C32(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB931B48FB3E13CF0(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x48F64101B58EB7F7(iParam0);
		uParam1->f_67 = unk_0xA3EFB2F9FFCDC48D(iParam0);
		uParam1->f_69 = unk_0xBB644BAE860F67B7(iParam0);
		uParam1->f_70 = unk_0x4AC847D90EBAFAEE(iParam0);
		unk_0x332D9608C3A4D1BE(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3182B161F39E40BC(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1CD308F8479FBE52(iParam0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 28);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 29);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 30);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			uParam1->f_68 = unk_0x48D44DDE1A5A9BD7(iParam0);
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (unk_0x923087289F6BA752(iParam0))
			{
				switch (unk_0x3D09A88E72AB7687(iParam0))
				{
					case 2:
					case 0:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x263B56EFBC6AC36C(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 9);
		}
		if (unk_0x1E729885E653D827(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 10);
		}
		if (unk_0x6E728693163D9496(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 13);
			unk_0x4B850687F46D6E15(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9EBDB9930E2E0600(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 12);
		}
		func_192(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), func_191(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x45AFEFCDD35076F2(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 11);
		}
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "IgnoredByQuickSave") && unk_0x53ABC9BE848EA65A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 27);
		}
	}
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_192(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7404950238A154C2(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xBE23E5C609DF6E79(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x91B47E3FC237F24A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x64D946BA23568D30(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_193(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_194(int iParam0)
{
	if ((((((((((!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0)) || func_206(iParam0, 0, 0)) || func_206(iParam0, 1, 0)) || func_206(iParam0, 2, 0)) || func_205(iParam0) != 145) || func_204(iParam0)) || func_203(iParam0)) || func_202(iParam0)) || func_201(iParam0)) || !func_195(unk_0x14B7103DBD149FFE(iParam0)))
	{
		if (func_203(iParam0))
		{
		}
		if (func_203(iParam0))
		{
		}
		if (func_206(iParam0, 0, 0))
		{
		}
		if (func_206(iParam0, 1, 0))
		{
		}
		if (func_206(iParam0, 2, 0))
		{
		}
		if (func_205(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	if (((unk_0x9F59BCFFFEAAD4B1(iParam0) || unk_0x1699D7B95446F15C(iParam0)) || unk_0xE083914AB72DD7CE(iParam0)) || unk_0xE4CD4B212196D2C5(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_196(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xA84E120D1B16B142(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("buffalo3") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("gauntlet2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_174())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xCDB51B918CEDF9B8())
		{
			if (unk_0x292BAD2AB4F88E45(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA10BCE9255970BC8(Var1.f_0))
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
		if ((((!func_200() && !func_199()) && !func_198()) && !func_197()) && !func_174())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3F0C224D3CC05EF2() || unk_0x913B1C01C1BA6C6F()) || unk_0xEC209B562C5EFDB2())
		{
		}
		else if (!func_198())
		{
			return 0;
		}
	}
	return 1;
}

int func_197()
{
	return 0;
}

int func_198()
{
	return 1;
}

int func_199()
{
	return 1;
}

int func_200()
{
	if (unk_0x2D6859674806FDCE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	uVar1 = unk_0xE0DCE5625B61B0CC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD994929E13CC1ED5(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_196(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88503[iVar0]))
		{
			if (Global_88503[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]) && unk_0x7404950238A154C2(Global_88473[iVar0], 0))
			{
				if (Global_88473[iVar0] == iParam0 && unk_0x14B7103DBD149FFE(Global_88473[iVar0]) == unk_0x14B7103DBD149FFE(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[24]))
	{
		if (iParam0 == Global_67889.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67889.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 145;
	}
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			if (Global_88473[iVar0] == iParam0)
			{
				return Global_88483[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_206(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_207(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x236D8AD7EE179F46(Global_98931.f_5843[iVar9], 0))
		{
			if (unk_0x9ED6CC42898E5346(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_208(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_121(iVar0, bParam0);
		iVar0++;
	}
}

