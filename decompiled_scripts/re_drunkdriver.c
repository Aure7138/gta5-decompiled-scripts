#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65[2] = { 0, 0 };
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_71 = 0f;
	struct<3> Local_72 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iLocal_90 = 0;
	var uLocal_91[2] = { 0, 0 };
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<6> Local_137 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_143[24] = "";
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	struct<3> Local_152 = { 0, 0, 0 } ;
	var uLocal_155[2] = { 0, 0 };
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	struct<3> Local_160 = { 0, 0, 0 } ;
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 16;
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
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	int iLocal_338 = 0;
	struct<3> Local_339 = { 0, 0, 0 } ;
	struct<3> Local_342 = { 0, 0, 0 } ;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	uLocal_51 = unk_0xD736C0AC62BF73AD();
	uLocal_52 = unk_0x880E0FAC08C6FA65();
	Local_87 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_124 = -1;
	StringCopy(&Local_137, "", 24);
	iLocal_165 = -1;
	Local_339 = { -1017.345f, -1354.196f, 4.4568f };
	Local_342 = { 2003.456f, 3071.102f, 46.0499f };
	Local_57 = { ScriptParam_0.f_1[0 /*3*/] };
	func_273();
	if (unk_0xE8A79675302ED812(11))
	{
		func_235();
	}
	if (func_193(Local_57, 27, iLocal_345, 0, 0))
	{
		func_190(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	iLocal_159 = unk_0x105601648511CC64();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x684B06333594F9EA() || iLocal_62)
		{
			if (!func_189())
			{
				if (func_188())
				{
					func_235();
				}
			}
			unk_0x2E94C9549322098D("RE_DD", 0);
			switch (iLocal_53)
			{
				case 0:
					if (iLocal_56)
					{
						iLocal_172 = 1;
						iLocal_53 = 1;
					}
					else
					{
						if (func_176())
						{
							func_235();
						}
						if (!bLocal_60)
						{
							func_175();
						}
						if (bLocal_60)
						{
							func_174();
						}
					}
					break;
				
				case 1:
					func_164();
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						func_163();
						func_160();
						if (iLocal_54 == 1 && !unk_0x724D816EA203A79E(uLocal_91[1]))
						{
							func_70();
							if (func_68() || unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
							{
								if (unk_0x724D816EA203A79E(uLocal_91[0]))
								{
									if (!unk_0x1D403DFADBC2DE3C(uLocal_91[0], 0))
									{
										if (unk_0xD45C08B05D4687A7(uLocal_91[0]))
										{
											unk_0x57EB4CC8F1928A47(uLocal_91[0]);
										}
										unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
										unk_0x5558ED6D4A2DEC93(uLocal_91[0], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
										func_64(uLocal_91[0], 120000, 0);
										unk_0x22321800954A532E(uLocal_91[0], 1);
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_60();
							}
						}
						if (iLocal_54 == 2 || (iLocal_54 == 1 && unk_0x724D816EA203A79E(uLocal_91[1])))
						{
							func_70();
							if (iLocal_55 != 9)
							{
								if (func_68() || unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
								{
									if (unk_0x724D816EA203A79E(uLocal_91[0]))
									{
										if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
										{
											if (unk_0xD45C08B05D4687A7(uLocal_91[0]))
											{
												unk_0x57EB4CC8F1928A47(uLocal_91[0]);
											}
											unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
											unk_0x5558ED6D4A2DEC93(uLocal_91[0], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
											func_64(uLocal_91[0], 120000, 0);
											unk_0x22321800954A532E(uLocal_91[0], 1);
										}
									}
									if (unk_0x724D816EA203A79E(uLocal_91[1]))
									{
										if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
										{
											if (unk_0xD45C08B05D4687A7(uLocal_91[1]))
											{
												unk_0x57EB4CC8F1928A47(uLocal_91[1]);
											}
											unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
											unk_0x5558ED6D4A2DEC93(uLocal_91[1], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
											func_64(uLocal_91[1], 120000, 0);
											unk_0x22321800954A532E(uLocal_91[1], 1);
										}
									}
									if (iLocal_54 == 1)
									{
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_54 == 2)
									{
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_173, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_60();
								}
							}
						}
						if (unk_0x724D816EA203A79E(uLocal_91[0]))
						{
							if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
							{
								unk_0xDBA0F5674ACCE43C(uLocal_91[0], 1f);
							}
						}
						if (unk_0x724D816EA203A79E(uLocal_91[1]))
						{
							if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
							{
								unk_0xDBA0F5674ACCE43C(uLocal_91[1], 1f);
							}
						}
					}
					if ((func_59() && !func_58()) && iLocal_55 != 9)
					{
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
						{
							if (unk_0x4DBCE270B354E123(uLocal_91[0], Local_87, 5f, 5f, 5f, 0, 1, 0))
							{
								if (iLocal_54 == 2)
								{
									if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
									{
										if (!unk_0xD45C08B05D4687A7(uLocal_91[0]) && !unk_0xD45C08B05D4687A7(uLocal_91[1]))
										{
											unk_0x75E3FA28CC7D5707(uLocal_91[0], func_57());
											unk_0x75E3FA28CC7D5707(uLocal_91[1], func_57());
										}
									}
								}
								func_56(0);
								unk_0x4EDE34FBADD967A6(0);
								func_62();
								iLocal_55 = 9;
							}
						}
					}
					if (func_55())
					{
						if (unk_0x724D816EA203A79E(uLocal_91[0]))
						{
							unk_0xF845620A03C7425B(&(uLocal_91[0]));
						}
						if (unk_0x724D816EA203A79E(uLocal_91[1]))
						{
							unk_0xF845620A03C7425B(&(uLocal_91[1]));
						}
						func_30();
					}
					if ((func_29() || func_28()) || func_3())
					{
						func_60();
					}
					break;
			}
		}
		else
		{
			func_235();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_54 == 1 && iLocal_55 == 7) && iLocal_64 == 5) && iLocal_110)
	{
		iLocal_159 = unk_0x105601648511CC64();
		if (func_2())
		{
			if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
			{
				Local_160 = { unk_0xA43418B5859810A6(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) };
			}
		}
	}
}

int func_2()
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
		{
			if (iLocal_54 == 1)
			{
				if (unk_0x724D816EA203A79E(uLocal_91[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
					{
						if (unk_0x62F3A07C43FFB568(uLocal_91[0], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (unk_0x724D816EA203A79E(uLocal_91[0]) && unk_0x724D816EA203A79E(uLocal_91[1]))
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
					{
						if (unk_0x62F3A07C43FFB568(uLocal_91[0], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && unk_0x62F3A07C43FFB568(uLocal_91[1], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
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

int func_3()
{
	if (iLocal_54 == 2)
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
		{
			if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_94, 200f, 200f, 200f, 0, 1, 0))
			{
				return 1;
			}
			if (((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_OFFR")) && !func_27("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_AKB")) && !func_27("REDR2_TRY")) && !func_27("REDR2_JIC")) && !func_27("REDR2_CH")) && !func_27("REDR2_WH2")) && !func_27("REDR2_BCK")) && !func_27("REDR2_JIA")) && !func_27("REDR2_JIB")) && !func_27("REDR2_JIC")) && !func_27("REDR2_WHA")) && !func_27("REDR2_WHB")) && !func_27("REDR2_WHC")) && !func_27("REDR2_PSM")) && !func_27("REDR2_PSF")) && !func_27("REDR2_PST")) && !func_27("REDR2_TK"))
			{
				if (unk_0x8B2EFFDCF3FE7E80(iLocal_94) && unk_0x8D66276473ABD7CC(iLocal_94) < iLocal_80)
				{
					iLocal_80 = unk_0x8D66276473ABD7CC(iLocal_94);
					func_5(0);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_173, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!unk_0xE59B7F5A03335350(iLocal_94, 0) || unk_0xE7259E40522CC260(iLocal_94))
			{
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_4())
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
						{
							unk_0x8CE2798B9A7027EC(uLocal_91[0], 1193033728, 0);
							unk_0x22321800954A532E(uLocal_91[0], 1);
						}
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
						{
							unk_0x9565F9267674873A(uLocal_91[1], uLocal_91[0], -1, 0f, 1f, 1073741824, 0);
							unk_0x22321800954A532E(uLocal_91[1], 1);
						}
						return 1;
					}
				}
			}
			if (unk_0x3D3F3014B0F74446(iLocal_94, 0, 2) && unk_0xD9C1758D86688CEA(iLocal_94, unk_0xBC25C936A095B5BA(), 0))
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
					unk_0x5558ED6D4A2DEC93(uLocal_91[0], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
				}
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
				{
					unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
					unk_0x5558ED6D4A2DEC93(uLocal_91[1], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
				}
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

int func_4()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_136)
		{
			if (func_10(&uLocal_173, "REDR2AU", &cLocal_143, &Local_137, 8, 0, 0))
			{
				iLocal_136 = 0;
			}
		}
	}
	else if ((!iLocal_136 && unk_0xE6711F601F11B66B()) && !func_27("REDR1_SWV"))
	{
		cLocal_143 = { func_9() };
		Local_137 = { func_8() };
		func_6();
		iLocal_136 = 1;
	}
}

void func_6()
{
	Global_14666 = 0;
	func_7();
}

void func_7()
{
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x5C7DC611411E2CF9();
		Global_16811 = 0;
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

struct<6> func_8()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15800 == 4)
	{
		iVar6 = unk_0xC0A904C0F2775676();
		iVar6 = (iVar6 + Global_16810);
		if (iVar6 > -1)
		{
			return Global_14668[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_9()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15800 == 4)
	{
		return Global_15419;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15807 = 0;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 1;
	StringCopy(&Global_16804, sParam3, 24);
	Global_2621441 = 0;
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_23();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_16();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_12();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}
	return 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_13()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_14()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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

void func_16()
{
	if (func_22(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_17();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

int func_17()
{
	func_18();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_21(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_20(unk_0xBC25C936A095B5BA());
			if (func_19(iVar0) && (!func_22(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_19(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_25()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_27(char* sParam0)
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (unk_0x3362CDE8460ED38B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (iLocal_54 == 1)
	{
		if (unk_0x36CEFBE9B745A58D(uLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (unk_0x36CEFBE9B745A58D(uLocal_91[0]) && unk_0x36CEFBE9B745A58D(uLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	if (iLocal_54 == 1)
	{
		if (!unk_0x724D816EA203A79E(uLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (!unk_0x724D816EA203A79E(uLocal_91[0]) && !unk_0x724D816EA203A79E(uLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_30()
{
	while (!func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_34(27, iLocal_345);
	func_31();
	func_235();
}

void func_31()
{
	func_32();
}

int func_32()
{
	if (func_33(0))
	{
		return 0;
	}
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

bool func_33(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_45("RE_REWARD", 1, 0, 4000, 10000, func_48(), 0, 138, 0);
			func_44(51);
		}
		if (func_43(iParam0))
		{
			Global_105220.f_24966.f_2 = 3;
		}
		if (func_42(iParam0, iParam1) != 322)
		{
			func_36(func_42(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_105208 = iParam1;
		if (Global_105206 == 0)
		{
			if (((Global_105209 == 1 || Global_105209 == 5) || Global_105209 == 11) || Global_105209 == 25)
			{
				func_35(2);
			}
			else if ((Global_105209 == 26 || Global_105209 == 8) || Global_105209 == 17)
			{
				func_35(7);
			}
			else
			{
				func_35(1);
			}
		}
	}
}

void func_35(int iParam0)
{
	Global_105206 = iParam0;
}

void func_36(int iParam0, var uParam1, var uParam2)
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
		func_40((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_105220.f_10165[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_105220.f_10165[iParam0 /*12*/].f_6 == 11 || Global_105220.f_10165[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_105220.f_10165[iParam0 /*12*/].f_5 = 1;
		Global_105220.f_10165[iParam0 /*12*/].f_10 = uParam1;
		Global_105220.f_10165[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_37();
	}
}

void func_37()
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
	Global_104956 = 0;
	Global_104957 = 0;
	Global_104958 = 0;
	Global_104959 = 0;
	Global_104960 = 0;
	Global_104961 = 0;
	Global_104962 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_105220.f_10165.f_3853;
	Global_105220.f_10165.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_105220.f_10165[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_105220.f_10165[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104956++;
					fVar1 = (fVar1 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104957++;
					fVar2 = (fVar2 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104958++;
					fVar3 = (fVar3 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104959++;
					fVar4 = (fVar4 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104960++;
					fVar5 = (fVar5 + (Global_105220.f_10165[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104961++;
					fVar6 = (fVar6 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104962++;
					fVar7 = (fVar7 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104939 > 0)
	{
		if (Global_104956 == Global_104939)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104940 > 0)
	{
		if (Global_104957 == Global_104940)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104941 > 0)
	{
		if (Global_104958 == Global_104941)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104942 > 0)
	{
		if (Global_104959 == Global_104942)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104943 > 0)
	{
		if (((Global_104960 == Global_104943 || (Global_104943 * 10 / Global_104960) < 41) || Global_104960 > Global_104946) || Global_104960 == Global_104946)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_105220.f_10165.f_3856, 14))
			{
				if (Global_104960 == Global_104943)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_104943, 0);
					unk_0xF0059F27F7BB6680(&(Global_105220.f_10165.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104944 > 0)
	{
		if (Global_104961 == Global_104944)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104945 > 0)
	{
		if (Global_104962 == Global_104945)
		{
			fVar7 = 5f;
		}
	}
	Global_105220.f_10165.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104960 > Global_104946 || Global_104960 == Global_104946)
	{
		iVar9 = Global_104946;
	}
	else
	{
		iVar9 = Global_104960;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_104956, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_104939, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_104957, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_104940, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_104958, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_104941, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_104959, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_104942, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_104946, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_104962 + Global_104961), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_104945 + Global_104944), 1);
	Global_104963 = (Global_104956 * 100 / Global_104939);
	Global_104965 = ((Global_104958 + Global_104957) * 100 / (Global_104941 + Global_104940));
	Global_104964 = ((Global_104959 + iVar9) * 100 / (Global_104942 + Global_104946));
	Global_104966 = ((Global_104961 + Global_104962) * 100 / (Global_104944 + Global_104945));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_105220.f_10165.f_3853, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_104963, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_104964, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_104965, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853))
	{
		func_39(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_38() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
				{
					func_32();
				}
			}
		}
	}
}

int func_38()
{
	return Global_25277;
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_41();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_41()
{
	return Global_1312736;
}

int func_42(int iParam0, int iParam1)
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

int func_43(int iParam0)
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

void func_44(int iParam0)
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
		unk_0xF0059F27F7BB6680(&(Global_105220.f_20381.f_150[iVar1]), iVar0);
	}
}

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
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
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_105220.f_20381[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_105220.f_20381.f_145 < 9)
	{
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_4), sParam1, 16);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_9 = iParam5;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_11 = iParam6;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_12 = uParam2;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_13 = iParam7;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_14 = iParam8;
		Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_105220.f_20381[Global_105220.f_20381.f_145 /*16*/].f_10 = -1;
		}
		Global_105220.f_20381.f_145++;
		func_47();
	}
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_105220.f_20381.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_105220.f_20381.f_145)
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 0))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[0])
			{
				Global_105220.f_20381.f_146[0] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 1))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[1])
			{
				Global_105220.f_20381.f_146[1] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20381[iVar0 /*16*/].f_11, 2))
		{
			if (Global_105220.f_20381[iVar0 /*16*/].f_12 > Global_105220.f_20381.f_146[2])
			{
				Global_105220.f_20381.f_146[2] = Global_105220.f_20381[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_48()
{
	func_18();
	switch (Global_105220.f_2354.f_539.f_4301)
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

int func_49(int iParam0)
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
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20381.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&(Global_105220.f_24966.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)
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

int func_52()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar16 = func_53(Var0);
	return uVar16;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x56BEECB328B6D29D(&cParam0))
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

int func_54()
{
	return 1;
}

int func_55()
{
	if (Global_25513)
	{
		func_35(4);
		return 1;
	}
	return 0;
}

void func_56(int iParam0)
{
	Global_16811 = iParam0;
}

var func_57()
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

int func_58()
{
	if (Global_105220.f_24966.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return Global_25512;
}

void func_60()
{
	func_235();
}

bool func_61(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

void func_62()
{
	Global_14666 = 0;
	func_63();
}

void func_63()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = func_67(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_66(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_65();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36818[iVar2 /*5*/] = 0;
	Global_36818[iVar2 /*5*/].f_1 = iParam0;
	Global_36818[iVar2 /*5*/].f_2 = iParam1;
	Global_36818[iVar2 /*5*/].f_3 = iParam1;
	Global_36818[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xBC25C936A095B5BA())
	{
		Global_37055 = 1;
	}
	Global_36817++;
	return 1;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36818[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36818[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36844[iVar0 /*5*/].f_1)
		{
			return Global_36844[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_68()
{
	unk_0x3068A56E3C44BFB6(1);
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		return 1;
	}
	if ((unk_0x04880508C862E589(Local_152, 40f, 1) || unk_0x04880508C862E589(func_69(unk_0xB5CEFD608600A09F()), 10f, 0)) || unk_0x876474582C5DECDE(Local_152 - Vector(40f, 40f, 40f), Local_152 + Vector(40f, 40f, 40f), 0))
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
	{
		if (unk_0xD9C1758D86688CEA(uLocal_91[0], unk_0xBC25C936A095B5BA(), 1) || unk_0x149E9368A11035DE(uLocal_91[0]))
		{
			return 1;
		}
		if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
		{
			if (unk_0xD9C1758D86688CEA(uLocal_91[0], unk_0x3E12B546F3F2597A(), 1))
			{
				return 1;
			}
		}
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), uLocal_91[0]) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), uLocal_91[0]))
			{
				if (unk_0x1028B6250119A74B(uLocal_91[0], unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x724D816EA203A79E(uLocal_91[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
		{
			if (unk_0xD9C1758D86688CEA(uLocal_91[1], unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				if (unk_0xD9C1758D86688CEA(uLocal_91[1], unk_0x3E12B546F3F2597A(), 1))
				{
					return 1;
				}
			}
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), uLocal_91[1]) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), uLocal_91[1]))
				{
					if (unk_0x1028B6250119A74B(uLocal_91[1], unk_0xBC25C936A095B5BA()))
					{
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_69(int iParam0)
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

void func_70()
{
	int iVar0;
	
	switch (iLocal_55)
	{
		case 0:
			if (iLocal_54 == 1)
			{
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0, 1, 0) && unk_0x33CC9445B2DF9387(Local_152, 1f)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_152, 15f, 15f, 15f, 0, 1, 0))
				{
					if (unk_0x2DA8CA50A72528FB(uLocal_151))
					{
						unk_0x07B8ECB35A4ED3AC(&uLocal_151);
					}
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
					{
						if (!unk_0x2DA8CA50A72528FB(uLocal_155[0]))
						{
							uLocal_155[0] = func_159(uLocal_91[0], 0, 145);
							unk_0x222805B89367761E(uLocal_155[0], 0);
						}
					}
					if (!func_189())
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
						{
							iLocal_95 = unk_0x3E12B546F3F2597A();
						}
						func_158(&uLocal_173, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_149(1);
						func_148(1);
					}
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0, 1, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
						{
							func_147();
							unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0xE896C0AD02364F2A(uLocal_91[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_123 = (unk_0x105601648511CC64() + 60000);
							if (unk_0x2DA8CA50A72528FB(uLocal_155[0]))
							{
								unk_0x222805B89367761E(uLocal_155[0], 1);
							}
							iLocal_55 = 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0, 1, 0) && unk_0x33CC9445B2DF9387(Local_152, 1f)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_152, 15f, 15f, 15f, 0, 1, 0))
				{
					func_146();
					if (!func_189())
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
						{
							iLocal_95 = unk_0x3E12B546F3F2597A();
						}
						func_149(1);
						func_148(1);
					}
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0, 1, 0))
					{
						func_61(&uLocal_173, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (unk_0x2DA8CA50A72528FB(uLocal_155[0]))
						{
							unk_0x222805B89367761E(uLocal_155[0], 1);
						}
						if (unk_0x2DA8CA50A72528FB(uLocal_155[1]))
						{
							unk_0x222805B89367761E(uLocal_155[1], 1);
						}
						iLocal_123 = (unk_0x105601648511CC64() + 120000);
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_123 < unk_0x105601648511CC64())
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
				{
					unk_0xC5A6DFE2B8987B17(&uLocal_99);
					unk_0x56F2E1B5599188FA(0, uLocal_91[1], 7000, 2060, 4);
					unk_0x61E7E913658B4389(0, 2500);
					unk_0xD179FA0466FA4FE3(0, iLocal_94, -1, -1, 1f, 1, 0);
					unk_0x535008C596714F9E(uLocal_99);
					unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
					unk_0x02DAF06EA4F08219(&uLocal_99);
				}
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
				{
					unk_0xC5A6DFE2B8987B17(&uLocal_99);
					unk_0x56F2E1B5599188FA(0, uLocal_91[0], 7000, 2060, 4);
					unk_0x346129B364057FF6(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					unk_0x346129B364057FF6(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
					unk_0x535008C596714F9E(uLocal_99);
					unk_0xA8E6405305C0D7DF(uLocal_91[1], uLocal_99);
					unk_0x02DAF06EA4F08219(&uLocal_99);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_55 = 3;
			}
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), uLocal_91[0], 80f))
					{
						bLocal_121 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_55 = 4;
					}
				}
				else if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x9E49B134E3245BA6(1);
				}
				else
				{
					unk_0x9E49B134E3245BA6(0);
				}
			}
			break;
		
		case 3:
			if (iLocal_54 == 1)
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
					{
						if (func_61(&uLocal_173, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							unk_0xC1B1E9A034A63A62(0);
							iLocal_55 = 4;
						}
					}
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), uLocal_91[0], 80f))
						{
							bLocal_121 = true;
							unk_0xC1B1E9A034A63A62(0);
							iLocal_55 = 4;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_145();
						if (func_144())
						{
							func_56(0);
						}
					}
					else if (func_4())
					{
						func_56(1);
					}
				}
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_68, 15f, 15f, 15f, 0, 1, 0) && !unk_0x756B942C10C07DC2(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
					{
						if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), uLocal_91[0], 80f))
						{
							if (unk_0x1028B6250119A74B(uLocal_91[0], unk_0xBC25C936A095B5BA()))
							{
								if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_99);
									unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2060, 4);
									unk_0xE896C0AD02364F2A(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
									unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
									unk_0x535008C596714F9E(uLocal_99);
									unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
									unk_0x02DAF06EA4F08219(&uLocal_99);
								}
								if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
								{
									unk_0x56F2E1B5599188FA(uLocal_91[1], unk_0xBC25C936A095B5BA(), -1, 2060, 4);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_55 = 4;
							}
						}
					}
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0, 1, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
					{
						unk_0xC5A6DFE2B8987B17(&uLocal_99);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2060, 4);
						unk_0xE896C0AD02364F2A(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						unk_0x535008C596714F9E(uLocal_99);
						unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
						unk_0x02DAF06EA4F08219(&uLocal_99);
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
						{
							unk_0x56F2E1B5599188FA(uLocal_91[1], unk_0xBC25C936A095B5BA(), -1, 2060, 4);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_55 = 4;
					}
				}
				if (unk_0xE59B7F5A03335350(iLocal_94, 0))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_94, 1.5f, 1.5f, 5f, 0, 1, 0) && unk_0x756B942C10C07DC2(unk_0xBC25C936A095B5BA()))
					{
						if (func_144())
						{
							func_56(0);
						}
						func_62();
						unk_0x4EDE34FBADD967A6(0);
						if (func_61(&uLocal_173, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_170 = 2;
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (unk_0x2DA8CA50A72528FB(uLocal_155[iLocal_63]))
								{
									unk_0x07B8ECB35A4ED3AC(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							if (!unk_0x2DA8CA50A72528FB(uLocal_158))
							{
								uLocal_158 = func_142(iLocal_94, 0, 0);
							}
							if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
							{
								unk_0x49D46EE47C9CCB66(uLocal_91[0]);
							}
							iLocal_55 = 4;
						}
					}
				}
				if (iLocal_123 < unk_0x105601648511CC64())
				{
					if (func_144())
					{
						func_56(0);
					}
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1])) && unk_0x724D816EA203A79E(iLocal_94))
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_99);
							unk_0x56F2E1B5599188FA(0, uLocal_91[1], -1, 2060, 4);
							unk_0xD179FA0466FA4FE3(0, iLocal_94, -1, -1, 1f, 1, 0);
							unk_0x535008C596714F9E(uLocal_99);
							unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
							unk_0x02DAF06EA4F08219(&uLocal_99);
							unk_0xC5A6DFE2B8987B17(&uLocal_99);
							unk_0x56F2E1B5599188FA(0, uLocal_91[0], -1, 2060, 4);
							unk_0x85DB484A637CEAB9(0, uLocal_91[0], 0);
							unk_0xD179FA0466FA4FE3(0, iLocal_94, -1, 0, 1f, 1, 0);
							unk_0x535008C596714F9E(uLocal_99);
							unk_0xA8E6405305C0D7DF(uLocal_91[1], uLocal_99);
							unk_0x02DAF06EA4F08219(&uLocal_99);
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (unk_0x2DA8CA50A72528FB(uLocal_155[iLocal_63]))
								{
									unk_0x07B8ECB35A4ED3AC(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_54 == 1)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
						{
							if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0) || bLocal_121)
							{
								unk_0x9E49B134E3245BA6(0);
								unk_0x56F2E1B5599188FA(uLocal_91[0], unk_0xBC25C936A095B5BA(), -1, 2060, 4);
								unk_0x56F2E1B5599188FA(uLocal_91[1], unk_0xBC25C936A095B5BA(), -1, 2060, 4);
								unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), uLocal_91[0], -1, 2060, 4);
								if ((unk_0x105601648511CC64() + 50000) > iLocal_123 || unk_0xD95B48C451FB1A20(unk_0xB5CEFD608600A09F()))
								{
									func_6();
									if (bLocal_121)
									{
										if (!func_4())
										{
											if (func_17() == 0)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_170++;
												}
											}
											else if (func_17() == 1)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_170++;
												}
											}
											else if (func_17() == 2)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_170++;
												}
											}
										}
									}
									else
									{
										iLocal_170++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_141())
							{
								if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_99);
									unk_0xE896C0AD02364F2A(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), -1);
									unk_0x535008C596714F9E(uLocal_99);
									unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
									unk_0x02DAF06EA4F08219(&uLocal_99);
									if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
									{
										unk_0xC5A6DFE2B8987B17(&uLocal_99);
										unk_0xE896C0AD02364F2A(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
										unk_0x85DB484A637CEAB9(0, uLocal_91[0], 0);
										unk_0x61E7E913658B4389(0, 3000);
										unk_0x346129B364057FF6(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										unk_0x346129B364057FF6(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
										unk_0x535008C596714F9E(uLocal_99);
										unk_0xA8E6405305C0D7DF(uLocal_91[1], uLocal_99);
										unk_0x02DAF06EA4F08219(&uLocal_99);
									}
									func_140();
								}
							}
							else
							{
								if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
								{
									if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), uLocal_91[0], 80f))
									{
										unk_0x56F2E1B5599188FA(uLocal_91[0], unk_0xBC25C936A095B5BA(), 10000, 2060, 4);
										unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), uLocal_91[0], 10000, 2060, 4);
										func_6();
										unk_0x4EDE34FBADD967A6(0);
										iLocal_170++;
									}
									else
									{
										func_139(uLocal_91[0], &(uLocal_65[0]));
									}
								}
								if (!func_4())
								{
									iLocal_170++;
								}
							}
						}
						break;
					
					case 2:
						if (func_141())
						{
							iLocal_170 = 6;
						}
						else
						{
							iLocal_170++;
						}
						break;
					
					case 3:
						if (!iLocal_104)
						{
							if (unk_0x83666F9FB8FEBD4B() > 1500)
							{
								if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_99);
									unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 10000, 2060, 4);
									unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
									unk_0x61E7E913658B4389(0, 500);
									unk_0x535008C596714F9E(uLocal_99);
									unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
									unk_0x02DAF06EA4F08219(&uLocal_99);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_104 = 1;
								}
							}
						}
						func_139(uLocal_91[0], &(uLocal_65[0]));
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_170++;
							}
						}
						break;
					
					case 4:
						if (!func_141())
						{
							if (!func_4())
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
									if (unk_0x2DA8CA50A72528FB(uLocal_155[0]))
									{
										unk_0x07B8ECB35A4ED3AC(&(uLocal_155[0]));
									}
									if (unk_0x2DA8CA50A72528FB(uLocal_155[1]))
									{
										unk_0x07B8ECB35A4ED3AC(&(uLocal_155[1]));
									}
									if (unk_0xE59B7F5A03335350(iLocal_94, 0))
									{
										unk_0xD421BC740C5340C3(iLocal_94, 1);
										if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
										{
											unk_0xD179FA0466FA4FE3(uLocal_91[0], iLocal_94, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_170++;
								}
							}
						}
						else
						{
							if (unk_0x2DA8CA50A72528FB(uLocal_155[0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uLocal_155[0]));
							}
							if (unk_0x2DA8CA50A72528FB(uLocal_155[1]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uLocal_155[1]));
							}
							iLocal_170++;
						}
						break;
					
					case 5:
						if (func_141())
						{
							if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
							{
								if (!unk_0xD45C08B05D4687A7(uLocal_91[0]))
								{
									unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
									unk_0x75E3FA28CC7D5707(uLocal_91[0], func_57());
									unk_0x0AB3C2863B144B82(uLocal_91[0], 1);
									unk_0x59B9712C1EAB0092(uLocal_91[0], 0);
								}
								unk_0xA902E18EDF6FA0C8(255, uLocal_100, joaat("player"));
								func_138();
							}
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_94)
								{
									if (!func_4())
									{
										if (func_17() == 0)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_55 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_139(uLocal_91[0], &(uLocal_65[0]));
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (func_141())
							{
								if (!func_4())
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_170 = 10;
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 7:
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (func_141())
							{
								if (!func_4())
								{
									if (func_17() == 0)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_170 = 10;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_170 = 10;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_170 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 10:
						if (func_141())
						{
							if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
							{
								if (!unk_0xD45C08B05D4687A7(uLocal_91[0]))
								{
									unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
									unk_0x75E3FA28CC7D5707(uLocal_91[0], func_57());
									unk_0x0AB3C2863B144B82(uLocal_91[0], 1);
									unk_0x59B9712C1EAB0092(uLocal_91[0], 0);
								}
								unk_0xA902E18EDF6FA0C8(255, uLocal_100, joaat("player"));
								func_138();
							}
							iLocal_170++;
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 11:
						iLocal_55 = 7;
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
						{
							if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (unk_0xC5B8A5F778E321DD(uLocal_91[0], unk_0xBC25C936A095B5BA(), 50f))
								{
									unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), uLocal_91[0], -1, 2060, 4);
									unk_0x56F2E1B5599188FA(uLocal_91[0], unk_0xBC25C936A095B5BA(), -1, 2060, 4);
									unk_0x56F2E1B5599188FA(uLocal_91[1], unk_0xBC25C936A095B5BA(), -1, 2060, 4);
									if (func_144())
									{
										func_56(0);
									}
									func_6();
									unk_0x4EDE34FBADD967A6(0);
									if (func_61(&uLocal_173, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_170++;
									}
								}
								else
								{
									func_139(uLocal_91[0], &(uLocal_65[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_99);
							unk_0x61E7E913658B4389(0, 500);
							unk_0x535008C596714F9E(uLocal_99);
							unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
							unk_0x02DAF06EA4F08219(&uLocal_99);
							unk_0xC1B1E9A034A63A62(0);
							iLocal_170++;
						}
						break;
					
					case 2:
						func_139(uLocal_91[0], &(uLocal_65[0]));
						if (!unk_0x756B942C10C07DC2(unk_0xBC25C936A095B5BA()))
						{
							if (unk_0xE59B7F5A03335350(iLocal_94, 0))
							{
								unk_0xD421BC740C5340C3(iLocal_94, 1);
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 8000)
						{
							if (unk_0x2DA8CA50A72528FB(uLocal_155[0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uLocal_155[0]));
							}
							if (unk_0x2DA8CA50A72528FB(uLocal_155[1]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uLocal_155[1]));
							}
							if (!unk_0x2DA8CA50A72528FB(uLocal_158))
							{
								if (unk_0xE59B7F5A03335350(iLocal_94, 0))
								{
									uLocal_158 = func_142(iLocal_94, 0, 0);
									unk_0xD421BC740C5340C3(iLocal_94, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 20f, 20f, 20f, 0, 1, 0) && unk_0x83666F9FB8FEBD4B() > 9500)
								{
									iVar0 = unk_0x491B2241281A03B7(0, 100);
									if (iVar0 < 60)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
										}
									}
									else if (func_61(&uLocal_173, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
							}
						}
						if (!unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
						{
							if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_94, 1))
							{
								iLocal_55 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 1)
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
				{
					if (unk_0x83666F9FB8FEBD4B() > 50000 || unk_0x3187EF5798B5D209(iLocal_94, -1, 0) == uLocal_91[0])
					{
						if (func_61(&uLocal_173, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (unk_0xE59B7F5A03335350(iLocal_94, 0) && !unk_0xE7259E40522CC260(iLocal_94))
							{
								if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
								{
									if (unk_0x1AAF0C23233C57AF(iLocal_94, -1, 0) && unk_0x62F3A07C43FFB568(uLocal_91[0], iLocal_94, 0))
									{
										unk_0x9BFB4F4439403039(uLocal_91[0], iLocal_94, 0);
										iLocal_55 = 2;
									}
									else if (unk_0x3187EF5798B5D209(iLocal_94, -1, 0) == uLocal_91[0])
									{
										iLocal_55 = 2;
									}
									else if (unk_0x3187EF5798B5D209(iLocal_94, -1, 0) == unk_0xBC25C936A095B5BA())
									{
										iLocal_55 = 7;
									}
									else
									{
										func_64(uLocal_91[0], 120000, 0);
										unk_0x8CE2798B9A7027EC(uLocal_91[0], 1193033728, 0);
										unk_0x22321800954A532E(uLocal_91[0], 1);
										unk_0x4EDE34FBADD967A6(0);
										func_60();
									}
								}
							}
							else if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
							{
								func_64(uLocal_91[0], 120000, 0);
								unk_0x8CE2798B9A7027EC(uLocal_91[0], 1193033728, 0);
								unk_0x22321800954A532E(uLocal_91[0], 1);
								unk_0x4EDE34FBADD967A6(0);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 60000)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (unk_0xE59B7F5A03335350(iLocal_94, 0))
						{
							if (unk_0x1AAF0C23233C57AF(iLocal_94, -1, 0))
							{
								if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_99);
									unk_0x44C98C11ED6DD327(0);
									unk_0xD179FA0466FA4FE3(0, iLocal_94, -1, -1, 1f, 1, 0);
									unk_0x535008C596714F9E(uLocal_99);
									unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
									unk_0x02DAF06EA4F08219(&uLocal_99);
								}
							}
							if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_99);
								unk_0x44C98C11ED6DD327(0);
								unk_0xD179FA0466FA4FE3(0, iLocal_94, -1, 0, 1f, 1, 0);
								unk_0x535008C596714F9E(uLocal_99);
								unk_0xA8E6405305C0D7DF(uLocal_91[1], uLocal_99);
								unk_0x02DAF06EA4F08219(&uLocal_99);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_54 == 1)
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
					{
						if (unk_0x62F3A07C43FFB568(uLocal_91[0], iLocal_94, 0))
						{
							if (unk_0xF4FCC3C1048FF2AB(uLocal_91[0], 355471868) != 1 && unk_0xF4FCC3C1048FF2AB(uLocal_91[0], 355471868) != 0)
							{
								unk_0xE6E403909F4BF47F(iLocal_94, 5f);
								unk_0xD7E19B03E0EB54E5(iLocal_94, 1);
								unk_0xC5A6DFE2B8987B17(&uLocal_99);
								unk_0x827661D9AAD4A354(0, iLocal_94, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x827661D9AAD4A354(0, iLocal_94, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x827661D9AAD4A354(0, iLocal_94, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x535008C596714F9E(uLocal_99);
								unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
								unk_0x02DAF06EA4F08219(&uLocal_99);
								unk_0x22321800954A532E(uLocal_91[0], 1);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (unk_0xE59B7F5A03335350(iLocal_94, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
					{
						if (unk_0x25EF720B1CAB1E23(uLocal_91[0], iLocal_94) && unk_0x25EF720B1CAB1E23(uLocal_91[1], iLocal_94))
						{
							unk_0xD7E19B03E0EB54E5(iLocal_94, 1);
							unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
							unk_0xDE2D2B13F24A979D(uLocal_91[1], -1);
							unk_0x22321800954A532E(uLocal_91[1], 1);
							iLocal_55 = 5;
						}
						if (!iLocal_101)
						{
							if (unk_0x25EF720B1CAB1E23(uLocal_91[0], iLocal_94) && !unk_0x25EF720B1CAB1E23(uLocal_91[1], iLocal_94))
							{
								unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
								unk_0xDE2D2B13F24A979D(uLocal_91[0], -1);
							}
							if (!unk_0x25EF720B1CAB1E23(uLocal_91[0], iLocal_94) && unk_0x25EF720B1CAB1E23(uLocal_91[1], iLocal_94))
							{
								unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
								unk_0xDE2D2B13F24A979D(uLocal_91[1], -1);
							}
							iLocal_101 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xE59B7F5A03335350(iLocal_94, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
					unk_0xC5A6DFE2B8987B17(&uLocal_99);
					unk_0x509F549022512095(0, iLocal_94, unk_0xA4455714F3DCE207(iLocal_94, 0f, 2f, 0f), 10f, 0, iLocal_98, 262144, 5f, -1f);
					unk_0x194CCBD594974E0D(0, iLocal_94, 24, 500);
					unk_0x194CCBD594974E0D(0, iLocal_94, 9, 1500);
					unk_0x194CCBD594974E0D(0, iLocal_94, 24, 500);
					unk_0x194CCBD594974E0D(0, iLocal_94, 11, 1500);
					unk_0x827661D9AAD4A354(0, iLocal_94, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, 1);
					unk_0x535008C596714F9E(uLocal_99);
					unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
					unk_0x02DAF06EA4F08219(&uLocal_99);
					unk_0x22321800954A532E(uLocal_91[0], 1);
				}
			}
			iLocal_55 = 6;
			break;
		
		case 6:
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
			{
				if (unk_0xF4FCC3C1048FF2AB(uLocal_91[0], 242628503) == 1)
				{
					if (unk_0xD62938026B30481A(uLocal_91[0]) == 5)
					{
						func_60();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_54 == 1)
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
				{
					if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[1], 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x02537C8C1BEEB477(&(uLocal_91[1]));
					}
				}
				switch (iLocal_64)
				{
					case 0:
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (!unk_0x2DA8CA50A72528FB(uLocal_155[0]))
							{
								uLocal_155[0] = func_159(uLocal_91[0], 0, 145);
							}
							iLocal_64++;
							unk_0xC1B1E9A034A63A62(0);
						}
						break;
					
					case 1:
						if (unk_0x83666F9FB8FEBD4B() > 1000)
						{
							if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
							{
								if (func_141())
								{
									if (unk_0xE59B7F5A03335350(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 0))
									{
										fLocal_164 = func_137(unk_0xBC25C936A095B5BA(), uLocal_91[0], 1);
										iLocal_64++;
									}
								}
								else if (!iLocal_119)
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_119 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_136();
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
						{
							if (func_141())
							{
								if (!iLocal_118)
								{
									if (func_137(unk_0xBC25C936A095B5BA(), uLocal_91[0], 1) > (fLocal_164 + 5f))
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_118 = 1;
										}
									}
								}
							}
							else if (!iLocal_119)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_119 = 1;
								}
							}
						}
						if (func_2())
						{
							if (unk_0xE59B7F5A03335350(iLocal_94, 0))
							{
								unk_0xD421BC740C5340C3(iLocal_94, 1);
							}
							if (unk_0x2DA8CA50A72528FB(uLocal_155[0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uLocal_155[0]));
							}
							if (func_17() == 2 && !func_58())
							{
								if (!unk_0x2DA8CA50A72528FB(uLocal_103))
								{
									uLocal_103 = func_134(Local_87, 0);
									unk_0xBF0E22F3E083C33D(uLocal_103, 269);
									func_132();
								}
							}
							iLocal_62 = 1;
							iLocal_64++;
						}
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
						{
							if (func_137(unk_0xBC25C936A095B5BA(), uLocal_91[0], 1) > 50f)
							{
								func_60();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							unk_0x4EDE34FBADD967A6(1500);
							unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
							if (func_17() == 0)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_17() == 1)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_17() == 2)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_171 = unk_0x105601648511CC64();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_131();
						func_130();
						func_136();
						if (!iLocal_110)
						{
							if ((unk_0x105601648511CC64() - iLocal_171) > 7000)
							{
								if (!func_4())
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_171 = unk_0x105601648511CC64();
										iLocal_110 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_109 && !bLocal_108)
							{
								func_129();
							}
							else
							{
								func_126();
								func_125();
								unk_0x4AED68BFACFB14CB(1);
							}
						}
						if (func_124(Local_81))
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_173, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_123())
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_173, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
						{
							if (unk_0x4DBCE270B354E123(uLocal_91[0], Local_81, Global_22, 1, 1, 0))
							{
								if (unk_0x2DA8CA50A72528FB(uLocal_102))
								{
									unk_0x07B8ECB35A4ED3AC(&uLocal_102);
								}
								if (unk_0x2DA8CA50A72528FB(uLocal_103))
								{
									unk_0x07B8ECB35A4ED3AC(&uLocal_103);
								}
								iLocal_55 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_64)
				{
					case 0:
						if (!unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
						{
							if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_94, 1))
							{
								if (!unk_0x2DA8CA50A72528FB(uLocal_155[0]))
								{
									uLocal_155[0] = func_159(uLocal_91[0], 0, 145);
								}
								if (!unk_0x2DA8CA50A72528FB(uLocal_155[1]))
								{
									uLocal_155[1] = func_159(uLocal_91[1], 0, 145);
								}
								if (!func_4())
								{
									unk_0xC1B1E9A034A63A62(0);
									if (func_17() == 0)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
						{
							unk_0x44C98C11ED6DD327(uLocal_91[0]);
							unk_0xD179FA0466FA4FE3(uLocal_91[0], iLocal_94, 30000, 2, 2f, 1, 0);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_64++;
						break;
					
					case 2:
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_99);
							unk_0x44C98C11ED6DD327(0);
							unk_0x5B8F74954F713B9E(0, iLocal_94, 1.5f, -3f, 0f, 1f, 4000, 1036831949, 1);
							unk_0xD179FA0466FA4FE3(0, iLocal_94, 30000, 1, 2f, 1, 0);
							unk_0x535008C596714F9E(uLocal_99);
							unk_0xA8E6405305C0D7DF(uLocal_91[1], uLocal_99);
							unk_0x02DAF06EA4F08219(&uLocal_99);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_64++;
						break;
					
					case 3:
						func_131();
						func_130();
						if (!iLocal_117)
						{
							if (!func_4())
							{
								if (func_61(&uLocal_173, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_117 = 1;
								}
							}
						}
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
							{
								if (!unk_0x1D403DFADBC2DE3C(uLocal_91[0], 0) && !unk_0x1D403DFADBC2DE3C(uLocal_91[1], 0))
								{
									if (unk_0x62F3A07C43FFB568(uLocal_91[0], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && unk_0x62F3A07C43FFB568(uLocal_91[1], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
									{
										unk_0xA902E18EDF6FA0C8(255, uLocal_100, joaat("player"));
										func_138();
										iLocal_63 = 0;
										while (iLocal_63 <= (iLocal_90 - 1))
										{
											if (unk_0x2DA8CA50A72528FB(uLocal_155[iLocal_63]))
											{
												unk_0x07B8ECB35A4ED3AC(&(uLocal_155[iLocal_63]));
											}
											iLocal_63++;
										}
										if (unk_0x2DA8CA50A72528FB(uLocal_158))
										{
											unk_0x07B8ECB35A4ED3AC(&uLocal_158);
										}
										if (func_17() == 2 && !func_58())
										{
											if (!unk_0x2DA8CA50A72528FB(uLocal_103))
											{
												uLocal_103 = func_134(Local_87, 0);
												unk_0xBF0E22F3E083C33D(uLocal_103, 269);
												func_132();
											}
										}
										if (func_17() == 0)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_64++;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_64++;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_64++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_131();
						func_130();
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
								unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
								iLocal_171 = unk_0x105601648511CC64();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_131();
						if (iLocal_346 == 0 || iLocal_346 == 9)
						{
							func_130();
						}
						if ((unk_0x105601648511CC64() - iLocal_171) > 9000)
						{
							func_117();
						}
						if (iLocal_346 == 9 && ((unk_0x105601648511CC64() - iLocal_347) > 6000 && (unk_0x105601648511CC64() - iLocal_347) < 6500))
						{
							func_61(&uLocal_173, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_124(Local_81))
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_173, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_123())
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_173, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
						{
							if ((!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1])) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_94, 0))
							{
								if (unk_0x4DBCE270B354E123(uLocal_91[0], Local_81, Global_22, 1, 1, 0) && unk_0x4DBCE270B354E123(uLocal_91[1], Local_81, Global_22, 0, 1, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 6:
						if (unk_0x2DA8CA50A72528FB(uLocal_102))
						{
							unk_0x07B8ECB35A4ED3AC(&uLocal_102);
						}
						if (unk_0x2DA8CA50A72528FB(uLocal_103))
						{
							unk_0x07B8ECB35A4ED3AC(&uLocal_103);
						}
						iLocal_55 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_63 = 0;
			while (iLocal_63 <= (iLocal_90 - 1))
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[iLocal_63]))
				{
					unk_0x2E35C4FA5F0ED22F(uLocal_91[iLocal_63], 0);
				}
				iLocal_63++;
			}
			if (iLocal_54 == 1)
			{
				if (func_116(1, 0, 1) && iLocal_124 == -1)
				{
					func_6();
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0x241D744C1CCBC526(unk_0x3E12B546F3F2597A(), (10.5f - 5f), 2, 0);
					}
					if (func_2())
					{
						if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
						else
						{
							iLocal_124 = 1;
						}
					}
					else
					{
						iLocal_124 = 2;
					}
				}
				if (iLocal_124 == 0)
				{
					func_115();
				}
				if (iLocal_124 == 1)
				{
					func_114();
				}
				if (iLocal_124 == 2)
				{
					func_113();
				}
				if (bLocal_130)
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
					func_30();
				}
			}
			if (iLocal_54 == 2)
			{
				if (func_116(1, 0, 1) && iLocal_124 == -1)
				{
					func_62();
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0x241D744C1CCBC526(unk_0x3E12B546F3F2597A(), (10.5f - 4f), 2, 0);
						unk_0x1732A8A5D2D39430(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						unk_0x1732A8A5D2D39430(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_105(1, 1, 1, 0, 0);
					while (func_4())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (func_2())
					{
						if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
					}
				}
				if (iLocal_124 == 0)
				{
					func_102();
				}
				else if (iLocal_124 == 1)
				{
					func_101();
				}
				else if (iLocal_124 == 2)
				{
					func_71();
				}
				if (bLocal_130)
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
					func_30();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_71()
{
	switch (iLocal_126)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
			{
				unk_0x57EB4CC8F1928A47(uLocal_91[0]);
				unk_0x56F2E1B5599188FA(uLocal_91[0], unk_0xBC25C936A095B5BA(), 10000, 2060, 4);
				unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), uLocal_91[0], 10000, 2060, 4);
			}
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
			{
				unk_0x57EB4CC8F1928A47(uLocal_91[0]);
				unk_0x56F2E1B5599188FA(uLocal_91[1], unk_0xBC25C936A095B5BA(), 10000, 2060, 4);
			}
			func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_126++;
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					unk_0xDF14F570C0180463(uLocal_91[0], Local_84, 1f, -1, 1193033728, 1056964608);
					iLocal_125 = unk_0x105601648511CC64() + 500;
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
				{
					unk_0x346129B364057FF6(uLocal_91[1], Local_84, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_73(Global_105220.f_28021[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_100();
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
					func_99(99, 1);
					func_98(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_98(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_98(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_84(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_80(5))
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
							func_98(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_98(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_98(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_80(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_98(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_98(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_98(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_98(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_98(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_98(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_98(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_98(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_98(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_98(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_98(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_98(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_98(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_98(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_98(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_80(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_98(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_98(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_98(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_98(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_98(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_98(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_79(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_99(95, iParam3);
					break;
				
				case 1:
					func_99(97, iParam3);
					break;
				
				case 2:
					func_99(96, iParam3);
					break;
			}
			func_99(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_76(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_76(iVar1);
	}
	iVar5 = (Global_53141[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53141[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53141[iVar2] = 2147483647;
				}
				else
				{
					Global_53141[iVar2] = (Global_53141[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_98(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_98(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_98(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53141[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53141[iVar2];
			Global_53141[iVar2] = (Global_53141[iVar2] - iParam3);
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
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_105220.f_20535.f_233[iVar2 /*69*/]++;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_1++;
		if (Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_75(iParam0);
	if (Global_35905 == 15)
	{
		func_74(0);
	}
	return 1;
}

void func_74(bool bParam0)
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
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53141[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_76(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_40(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0) || unk_0xFA30DFD0084E92FE(Global_2097152[func_78() /*12171*/].f_7688.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_2097152[func_78() /*12171*/].f_7688.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_77(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_77(int iParam0)
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
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79(int iParam0)
{
	func_99(93, iParam0);
	func_99(29, iParam0);
	func_99(30, iParam0);
}

bool func_80(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_81(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_2097152[func_78() /*12171*/].f_7688.f_10, iParam0);
}

int func_81(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar1 = func_83(iParam0, iParam1);
	uVar2 = func_82(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_85(27, 1);
	return 1;
}

int func_85(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_86(iParam0, iParam1);
}

int func_86(int iParam0, int iParam1)
{
	if (func_22(14) && !func_97(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25524 != 0 && !Global_70978)
	{
		return 0;
	}
	if (func_96(&Global_4267702))
	{
		if (func_94(&Global_4267702, iParam0))
		{
			return 0;
		}
		if (func_87(&Global_4267702, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_87(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_97(iParam1))
	{
		return 0;
	}
	if (func_94(uParam0, iParam1))
	{
		return 0;
	}
	if (func_93(uParam0) < 0f)
	{
		func_92(uParam0, 0);
	}
	func_90(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_88(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_97(iParam1))
	{
		return 0;
	}
	if (func_94(uParam0, iParam1))
	{
		return 0;
	}
	if (func_93(uParam0) < 0f)
	{
		func_92(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_89(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_89(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_90(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_91(uParam0, iVar0);
		iVar0++;
	}
	func_92(uParam0, (Global_4267701 - 0.5f));
}

void func_91(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_92(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_93(var uParam0)
{
	return uParam0->f_80;
}

bool func_94(var uParam0, int iParam1)
{
	return func_95(uParam0, iParam1) != -1;
}

int func_95(var uParam0, int iParam1)
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

bool func_96(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_97(int iParam0)
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

void func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_100()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53141[0] == iVar0)
		{
			Global_53141[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53141[1] == iVar0)
		{
			Global_53141[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53141[2] == iVar0)
		{
			Global_53141[2] = iVar0;
		}
	}
}

void func_101()
{
	int iVar0;
	
	switch (iLocal_126)
	{
		case 0:
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xB66CFDE6B830965A(iVar0))
				{
					if (unk_0xE59B7F5A03335350(iVar0, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
						{
							unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
							unk_0x57EB4CC8F1928A47(uLocal_91[0]);
						}
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
						{
							unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
							unk_0x57EB4CC8F1928A47(uLocal_91[1]);
						}
					}
					func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_99);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x346129B364057FF6(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x535008C596714F9E(uLocal_99);
				unk_0xA8E6405305C0D7DF(uLocal_91[1], uLocal_99);
				unk_0x02DAF06EA4F08219(&uLocal_99);
				iLocal_125 = unk_0x105601648511CC64() + 1500;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					unk_0x346129B364057FF6(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_125 = unk_0x105601648511CC64() + 1000;
					iLocal_126 = 7;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_125 = unk_0x105601648511CC64() + 1500;
					iLocal_126 = 7;
				}
			}
			else if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_125 = unk_0x105601648511CC64() + 750;
					iLocal_126 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						unk_0x346129B364057FF6(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_125 = unk_0x105601648511CC64() + 3500;
						iLocal_126++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						unk_0x346129B364057FF6(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_125 = unk_0x105601648511CC64() + 3500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_126++;
			}
			break;
		
		case 8:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_102()
{
	unk_0xDE7B9CB38D019BF0();
	switch (iLocal_126)
	{
		case 0:
			unk_0x59B038076F830627(0);
			unk_0x43F06392C4EF25E0(0);
			if (unk_0xE59B7F5A03335350(iLocal_94, 0))
			{
				if (unk_0xB66CFDE6B830965A(iLocal_94))
				{
					if (unk_0xE59B7F5A03335350(iLocal_94, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
						{
							unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
							unk_0x57EB4CC8F1928A47(uLocal_91[0]);
							unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), uLocal_91[0], 4000, 2060, 4);
						}
						if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
						{
							unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
							unk_0x57EB4CC8F1928A47(uLocal_91[1]);
						}
					}
					StringCopy(&cLocal_143, "", 24);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			if (unk_0xE59B7F5A03335350(iLocal_94, 0))
			{
				uLocal_128 = unk_0x585DE1CBEEB2D27D(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0, 2);
				uLocal_129 = unk_0x585DE1CBEEB2D27D(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0, 2);
				unk_0x2FB83B8BD6C05FD2(uLocal_128, "HAND_SHAKE", 0.3f);
				unk_0x2FB83B8BD6C05FD2(uLocal_129, "HAND_SHAKE", 0.3f);
				unk_0xAE099C1ADC89C331(uLocal_129, uLocal_128, 2500, 0, 0);
				unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
				unk_0x6C5F5B5F6894CCE3(Local_81, 8f, 1, 0, 0, 0);
				unk_0x641B19E156645A92(iLocal_94, 1120.551f, 2647.307f, 36.9963f, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(iLocal_94, 179.7675f);
				unk_0xF0A40F19AAB79E88(iLocal_94, 1084227584);
				iLocal_125 = unk_0x105601648511CC64() + 2500;
				iLocal_126++;
			}
			break;
		
		case 2:
			if (iLocal_125 - 500) < unk_0x105601648511CC64()
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
				{
					if (unk_0x5237AF95232D78C5(uLocal_91[1], 0))
					{
						unk_0xC5A6DFE2B8987B17(&uLocal_99);
						unk_0x346129B364057FF6(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
						unk_0x535008C596714F9E(uLocal_99);
						unk_0xA8E6405305C0D7DF(uLocal_91[1], uLocal_99);
						unk_0x02DAF06EA4F08219(&uLocal_99);
						unk_0x22321800954A532E(uLocal_91[1], 1);
					}
				}
			}
			if (iLocal_125 - 1000) < unk_0x105601648511CC64()
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					if (unk_0x5237AF95232D78C5(uLocal_91[0], 0))
					{
						unk_0xC5A6DFE2B8987B17(&uLocal_99);
						unk_0x346129B364057FF6(0, Local_84 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, 0, 1193033728);
						unk_0x535008C596714F9E(uLocal_99);
						unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
						unk_0x02DAF06EA4F08219(&uLocal_99);
						unk_0x22321800954A532E(uLocal_91[0], 1);
					}
				}
			}
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				unk_0x9961B404F89D0597(uLocal_128, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				unk_0x9961B404F89D0597(uLocal_129, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				unk_0xAE099C1ADC89C331(uLocal_129, uLocal_128, 5000, 0, 0);
				unk_0x13D5880CBA449AA9();
				iLocal_125 = unk_0x105601648511CC64() + 6000;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				unk_0x9961B404F89D0597(uLocal_128, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				unk_0x9961B404F89D0597(uLocal_129, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				unk_0xAE099C1ADC89C331(uLocal_129, uLocal_128, 1500, 1, 1);
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
				{
					unk_0x641B19E156645A92(uLocal_91[0], 1141.156f, 2643.205f, 37.1487f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(uLocal_91[0], 262.7369f);
					unk_0x641B19E156645A92(uLocal_91[1], 1140.152f, 2644.149f, 37.1487f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(uLocal_91[1], 262.1522f);
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
				}
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 1)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_125 = unk_0x105601648511CC64() + 1700;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_125 = unk_0x105601648511CC64() + 5500;
						iLocal_126++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_125 = unk_0x105601648511CC64() + 5500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			unk_0x13D5880CBA449AA9();
			unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 0);
			func_105(0, 1, 1, 0, 0);
			unk_0xF845620A03C7425B(&(uLocal_91[0]));
			unk_0xF845620A03C7425B(&(uLocal_91[1]));
			if (unk_0xE59B7F5A03335350(iLocal_94, 0))
			{
				unk_0xD421BC740C5340C3(iLocal_94, 7);
			}
			if (iLocal_131)
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_94, 0))
				{
					unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
					unk_0x127F627F30266DD9(iLocal_94, 1);
					unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
				}
			}
			else
			{
				unk_0x9CB4DD3D88846081(0, 0, 3, 0);
			}
			unk_0x348665177DBFB93B(uLocal_128, 0);
			unk_0xF3F01A78937DC905(0);
			unk_0x2B9AEC08E469E384(-7f, 1065353216);
			unk_0x59B038076F830627(1);
			unk_0x43F06392C4EF25E0(1);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			func_72(func_17(), 1, 40, 0, 1);
			bLocal_130 = true;
	}
	if (iLocal_126 != 0)
	{
		if (func_103(1000))
		{
			func_62();
			iLocal_131 = 1;
			iLocal_126 = 7;
		}
	}
}

int func_103(int iParam0)
{
	if (unk_0x726D9204B160D23E())
	{
		if ((unk_0x105601648511CC64() - Global_28) > iParam0)
		{
			Global_27 = unk_0x105601648511CC64();
		}
		Global_28 = unk_0x105601648511CC64();
		if ((unk_0x105601648511CC64() - Global_27) > iParam0)
		{
			if (func_104())
			{
				Global_27 = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_104()
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_105(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_112(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_14493.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!func_14())
			{
				Global_14493.f_1 = 3;
			}
			Global_15800 = 5;
		}
		func_111(1, iParam3, iParam2, 0);
		Global_55973 = 1;
		Global_68283 = 1;
		Global_70976 = 1;
	}
	else
	{
		func_112(0);
		unk_0xCB50D125C355ED9C();
		Global_55973 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_111(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_109(unk_0xB5CEFD608600A09F())) && !func_107(unk_0xB5CEFD608600A09F(), 0)) && !func_106()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_109(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_70976 = 0;
	}
}

bool func_106()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

bool func_107(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_108(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_109(int iParam0)
{
	if (func_107(iParam0, 0))
	{
		return 1;
	}
	if (func_110())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_111(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_112(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 13);
	}
}

void func_113()
{
	switch (iLocal_126)
	{
		case 0:
			if (!func_4())
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					unk_0x57EB4CC8F1928A47(uLocal_91[0]);
					unk_0x56F2E1B5599188FA(uLocal_91[0], unk_0xBC25C936A095B5BA(), 10000, 2060, 4);
					unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), uLocal_91[0], 10000, 2060, 4);
				}
				if (bLocal_108)
				{
					func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_126++;
			}
			break;
		
		case 1:
			iLocal_125 = unk_0x105601648511CC64() + 3000;
			iLocal_126++;
			break;
		
		case 2:
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_99);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 1800);
				unk_0x346129B364057FF6(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xE896C0AD02364F2A(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x535008C596714F9E(uLocal_99);
				unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
				unk_0x02DAF06EA4F08219(&uLocal_99);
				unk_0x22321800954A532E(uLocal_91[0], 1);
				iLocal_125 = unk_0x105601648511CC64() + 2000;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_114()
{
	int iVar0;
	
	switch (iLocal_126)
	{
		case 0:
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xB66CFDE6B830965A(iVar0) && !func_4())
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
					{
						unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
						unk_0x57EB4CC8F1928A47(uLocal_91[0]);
						unk_0x56F2E1B5599188FA(uLocal_91[0], unk_0xBC25C936A095B5BA(), 10000, 2060, 4);
						unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), uLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			iLocal_126++;
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_99);
				unk_0xA3981DED4FC2E56E(0, 0, 4194304);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 1800);
				unk_0x346129B364057FF6(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xE896C0AD02364F2A(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x535008C596714F9E(uLocal_99);
				unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
				unk_0x02DAF06EA4F08219(&uLocal_99);
				unk_0x22321800954A532E(uLocal_91[0], 1);
			}
			func_64(uLocal_91[0], 120000, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			iLocal_125 = unk_0x105601648511CC64() + 3000;
			iLocal_126++;
			break;
		
		case 4:
			iLocal_125 = unk_0x105601648511CC64() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 5:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				iLocal_126++;
			}
			break;
		
		case 6:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_115()
{
	switch (iLocal_126)
	{
		case 0:
			if (unk_0xE59B7F5A03335350(iLocal_94, 0))
			{
				if (unk_0xB66CFDE6B830965A(iLocal_94) && !func_4())
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
					{
						unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
						unk_0x57EB4CC8F1928A47(uLocal_91[0]);
						unk_0x56F2E1B5599188FA(uLocal_91[0], unk_0xBC25C936A095B5BA(), 10000, 2060, 4);
						unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), uLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_99);
				unk_0xA3981DED4FC2E56E(0, 0, 4194304);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 1800);
				unk_0x346129B364057FF6(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xE896C0AD02364F2A(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x535008C596714F9E(uLocal_99);
				unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
				unk_0x02DAF06EA4F08219(&uLocal_99);
				unk_0x22321800954A532E(uLocal_91[0], 1);
				func_64(uLocal_91[0], 120000, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
				iLocal_125 = unk_0x105601648511CC64() + 3000;
				iLocal_126++;
			}
			break;
		
		case 3:
			iLocal_125 = unk_0x105601648511CC64() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < unk_0x105601648511CC64())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			iLocal_126++;
			break;
		
		case 7:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

int func_116(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x21EBACBD9FF28F79())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (bParam0)
		{
			if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xEFA31351B754089B(iVar0) < 0.95f || unk_0xEFA31351B754089B(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

void func_117()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = unk_0xEBC6179F395EFBEB();
		if (iVar1 != 0)
		{
			iVar2 = unk_0x3D875C2512206692(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_122(64) || unk_0x8FCEEB789599BD9B(0, 86)) || unk_0x8FCEEB789599BD9B(0, 71)) || unk_0x8FCEEB789599BD9B(0, 72)) || unk_0x8FCEEB789599BD9B(0, 76)) || unk_0x8FCEEB789599BD9B(0, 73)) || unk_0x8FCEEB789599BD9B(0, 68)) || unk_0x8FCEEB789599BD9B(0, 75)) || iVar0)
		{
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		}
	}
	switch (iLocal_346)
	{
		case 0:
			if (func_121())
			{
				unk_0x56F2E1B5599188FA(uLocal_91[0], uLocal_91[1], -1, 2060, 4);
				unk_0x56F2E1B5599188FA(uLocal_91[1], uLocal_91[0], -1, 2060, 4);
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					unk_0xC5A6DFE2B8987B17(&uLocal_99);
					unk_0xE896C0AD02364F2A(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x535008C596714F9E(uLocal_99);
					unk_0xA8E6405305C0D7DF(uLocal_91[0], uLocal_99);
					unk_0x02DAF06EA4F08219(&uLocal_99);
					unk_0xC5A6DFE2B8987B17(&uLocal_99);
					unk_0xE896C0AD02364F2A(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x535008C596714F9E(uLocal_99);
					unk_0xA8E6405305C0D7DF(uLocal_91[1], uLocal_99);
					unk_0x02DAF06EA4F08219(&uLocal_99);
					iLocal_347 = unk_0x105601648511CC64();
					iLocal_346++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_347 = unk_0x105601648511CC64();
				iLocal_346++;
			}
			break;
		
		case 2:
			if (func_121())
			{
				if ((unk_0x105601648511CC64() - iLocal_347) > 5000)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_347 = unk_0x105601648511CC64();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - iLocal_347) > 15000)
			{
				if (func_121())
				{
					unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_346++;
				}
			}
			break;
		
		case 4:
			if (func_121())
			{
				func_119();
				if (unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
						unk_0xE896C0AD02364F2A(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
						iLocal_347 = unk_0x105601648511CC64();
						iLocal_346++;
					}
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
			{
				unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
				unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
				iLocal_346 = 3;
			}
			break;
		
		case 5:
			if (func_121())
			{
				func_119();
				func_118();
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(uLocal_91[1], 0), 0))
				{
					if ((unk_0x105601648511CC64() - iLocal_347) > 15000)
					{
						bVar3 = false;
						iVar4 = unk_0xEBC6179F395EFBEB();
						if (iVar4 != 0)
						{
							iVar5 = unk_0x3D875C2512206692(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_99);
							unk_0xE896C0AD02364F2A(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0xE896C0AD02364F2A(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x535008C596714F9E(uLocal_99);
							unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), uLocal_99);
							unk_0x02DAF06EA4F08219(&uLocal_99);
						}
						if (func_17() == 0)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_347 = unk_0x105601648511CC64();
								iLocal_346++;
							}
						}
						else if (func_17() == 1)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_347 = unk_0x105601648511CC64();
								iLocal_346++;
							}
						}
						else if (func_17() == 2)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_347 = unk_0x105601648511CC64() + 14000;
								iLocal_346++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_119();
			func_118();
			if ((unk_0x105601648511CC64() - iLocal_347) > 5000 && func_121())
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(uLocal_91[1], 0), 0))
				{
					if (unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (unk_0x4A3B2CF8BADDD74E(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							}
							unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0xE896C0AD02364F2A(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_346++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_119();
			if (func_121())
			{
				if (unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && unk_0x4A3B2CF8BADDD74E(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						unk_0x5EBD7EB63AD5FB1D(unk_0x9FE9D386222EEE47(uLocal_91[0], 0), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_347 = unk_0x105601648511CC64();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 8:
			func_119();
			if (func_121())
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(uLocal_91[1], 0), 0))
				{
					if (unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (unk_0x4A3B2CF8BADDD74E(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0xE896C0AD02364F2A(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
							iLocal_346 = 6;
						}
					}
				}
			}
			if ((unk_0x105601648511CC64() - iLocal_347) > 10000)
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
				{
					unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
					unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
					iLocal_347 = unk_0x105601648511CC64();
					iLocal_346++;
				}
			}
			break;
	}
}

void func_118()
{
	if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
	{
		if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(uLocal_91[0], 0), 0))
		{
			if (unk_0x96044E39418AAF17(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((unk_0x4A3B2CF8BADDD74E(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && unk_0x4A3B2CF8BADDD74E(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (unk_0x4A3B2CF8BADDD74E(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && unk_0x4A3B2CF8BADDD74E(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (unk_0x4A3B2CF8BADDD74E(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && unk_0x4A3B2CF8BADDD74E(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (unk_0x4A3B2CF8BADDD74E(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && unk_0x4A3B2CF8BADDD74E(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					unk_0x5EBD7EB63AD5FB1D(unk_0x9FE9D386222EEE47(uLocal_91[0], 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0xF2C27FE5A8B98CB5(-1, "SUSPENSION_SCRIPT_FORCE", unk_0x9FE9D386222EEE47(uLocal_91[0], 0), 0, 0, 0);
				}
			}
		}
	}
}

void func_119()
{
	unk_0x2423B13D9CFAD1DD();
	func_120();
}

void func_120()
{
	Global_17206.f_134 = 1;
}

int func_121()
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
	{
		if (unk_0x5237AF95232D78C5(uLocal_91[1], 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(uLocal_91[1], 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
				{
					if (unk_0x62F3A07C43FFB568(uLocal_91[0], iVar0, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, 2, 0) == uLocal_91[0] && unk_0x3187EF5798B5D209(iVar0, 1, 0) == uLocal_91[1])
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

int func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0x1B3AE5B27313855F(2, 195) - 128);
	iVar1 = (unk_0x1B3AE5B27313855F(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_123()
{
	if (func_17() == 2)
	{
		if (func_59())
		{
			if (unk_0xF0F2FC9DE291567F(-1014.154f, 4881.411f, 245.0001f, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 0), 1) < 400f)
			{
				if (!Global_25517)
				{
					unk_0x3857DADBD6EC8A54("AC_EN_ROUTE_CULT");
					Global_25517 = 1;
					if (!Global_25516)
					{
						Global_25516 = 1;
						return 1;
					}
				}
			}
			else if (Global_25517)
			{
				unk_0x3857DADBD6EC8A54("AC_LEFT_AREA");
				Global_25517 = 0;
			}
		}
	}
	return 0;
}

int func_124(struct<3> Param0)
{
	if (func_17() == 2)
	{
		if (func_59() && !Global_25515)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Param0) > (fLocal_47 + 200f) || unk_0xF0F2FC9DE291567F(-1014.154f, 4881.411f, 245.0001f, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 0), 1) < 400f)
			{
				Global_25515 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_125()
{
	if (!bLocal_108)
	{
		if ((((((((!func_27("REDR1_SWV") && !func_27("REDR1_COM")) && !func_27("REDR1_BANT1")) && !func_27("REDR1_SIK")) && !func_27("REDR2_DC")) && !func_27("REDR1_OFFR")) && !func_27("REDR2_OFFR")) && !func_27("REDR1_CULT")) && !func_27("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_110 && !iLocal_134) && (unk_0x105601648511CC64() - iLocal_171) > 9000)
		{
			if (!func_4())
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_134 = 1;
				}
			}
		}
	}
	if (iLocal_134 && !iLocal_135)
	{
		if (!func_4())
		{
			if (func_17() == 0)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_17() == 1)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_17() == 2)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_149 = unk_0x105601648511CC64() + 6000;
			iLocal_135 = 1;
		}
	}
	if (!bLocal_108)
	{
		if ((iLocal_134 && !iLocal_133) && iLocal_149 < unk_0x105601648511CC64())
		{
			if (!func_4())
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_135 = 0;
					iLocal_133 = 1;
				}
			}
		}
	}
	else if ((bLocal_108 && !iLocal_132) && iLocal_149 < unk_0x105601648511CC64())
	{
		if (!func_4())
		{
			if (func_61(&uLocal_173, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_135 = 0;
				iLocal_132 = 1;
			}
		}
	}
}

void func_126()
{
	if (func_2() && iLocal_111 < 2)
	{
		if ((unk_0x29A6568C53F62E85(unk_0xB5CEFD608600A09F()) > 0 && unk_0x29A6568C53F62E85(unk_0xB5CEFD608600A09F()) < 100) || unk_0x8B2EFFDCF3FE7E80(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
		{
			if (!func_27("REDR1_SWV"))
			{
				func_5(0);
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_163 += 6;
			}
		}
		func_127(Local_160, (unk_0x105601648511CC64() - iLocal_159));
	}
	if (iLocal_163 > 17)
	{
		iLocal_109 = 1;
	}
}

void func_127(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_2())
	{
		if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
		{
			Var0 = { unk_0xA43418B5859810A6(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) };
		}
	}
	Var3 = { Var0 - Param0 };
	Var3 = { func_128(Var3, iParam3) };
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
		{
			if (!unk_0x58F9E0EA914AEF2C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) && !func_27("REDR1_SWV"))
			{
				if (iLocal_165 == -1)
				{
					iLocal_165 = unk_0x105601648511CC64() + 400;
				}
				else if (iLocal_165 < unk_0x105601648511CC64())
				{
					iLocal_163 += 3;
					func_5(0);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_165 = -1;
			}
		}
	}
	if (Var3.f_1 > 0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_1 < -0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 > 0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 < -0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_128(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	Var0.f_0 = (Param0.f_0 / IntToFloat(iParam3));
	Var0.f_1 = (Param0.f_1 / IntToFloat(iParam3));
	Var0.f_2 = (Param0.f_2 / IntToFloat(iParam3));
	return Var0;
}

void func_129()
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
	{
		switch (iLocal_111)
		{
			case 0:
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
					{
						unk_0xD5DC0505375F4D00(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					iLocal_111++;
				}
				break;
			
			case 1:
				if (unk_0xC9D9444186B5A374() > 3000 || !func_4())
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
					{
						unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
						unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_111++;
					}
				}
				break;
			
			case 2:
				if (unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
					fVar0 = unk_0x4A3B2CF8BADDD74E(uLocal_91[0], "random@drunk_driver_1", sLocal_114);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_105)
						{
							unk_0xC913AF98662D4928("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_105 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_106)
						{
							unk_0xC913AF98662D4928("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_106 = 1;
							if (func_17() == 0)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_17() == 1)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_17() == 2)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_107)
						{
							unk_0xC913AF98662D4928("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_107 = 1;
						}
					}
					if (unk_0x4A3B2CF8BADDD74E(uLocal_91[0], "random@drunk_driver_1", sLocal_114) > 0.8f)
					{
						iLocal_111++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
				}
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					iLocal_105 = 0;
					iLocal_111++;
				}
				break;
			
			case 4:
				unk_0x38FF8CB6377D36F6(uLocal_112);
				bLocal_108 = true;
				break;
			}
	}
}

void func_130()
{
	if (unk_0x63276C96B907C69E(unk_0xBC25C936A095B5BA()))
	{
		if (!iLocal_168)
		{
			iLocal_166 = unk_0x105601648511CC64();
			iLocal_168 = 1;
		}
		else
		{
			iLocal_167 = unk_0x105601648511CC64();
		}
	}
	else
	{
		iLocal_167 = 0;
		iLocal_168 = 0;
		iLocal_169 = 0;
	}
	if ((iLocal_167 - iLocal_166) > 50000 && !iLocal_169)
	{
		if (iLocal_54 == 1)
		{
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_169 = 1;
	}
	if ((iLocal_167 - iLocal_166) > 60000 && iLocal_169)
	{
		if (iLocal_54 == 2)
		{
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
		{
			unk_0x8CE2798B9A7027EC(uLocal_91[0], 1193033728, 0);
			func_64(uLocal_91[0], 120000, 0);
			unk_0x22321800954A532E(uLocal_91[0], 1);
			if (unk_0xD45C08B05D4687A7(uLocal_91[0]))
			{
				unk_0x57EB4CC8F1928A47(uLocal_91[0]);
			}
			unk_0x5B8F74954F713B9E(uLocal_91[1], uLocal_91[0], 0f, 1f, 0f, 1f, -1, 1036831949, 1);
			func_64(uLocal_91[1], 120000, 0);
			unk_0x22321800954A532E(uLocal_91[1], 1);
			if (unk_0xD45C08B05D4687A7(uLocal_91[1]))
			{
				unk_0x57EB4CC8F1928A47(uLocal_91[1]);
			}
		}
		func_60();
	}
}

void func_131()
{
	if (iLocal_54 == 1)
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
		{
			if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_60();
			}
			if (func_141() || unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0xD45C08B05D4687A7(uLocal_91[0]))
				{
					unk_0x75E3FA28CC7D5707(uLocal_91[0], func_57());
					unk_0x0AB3C2863B144B82(uLocal_91[0], 1);
					unk_0x59B9712C1EAB0092(uLocal_91[0], 0);
				}
			}
			else if (unk_0xD45C08B05D4687A7(uLocal_91[0]))
			{
				unk_0x57EB4CC8F1928A47(uLocal_91[0]);
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x62F3A07C43FFB568(uLocal_91[0], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
				{
					if ((!unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3) && !unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3)) && !unk_0x8F1FDD0A40DC834A(uLocal_91[0]))
					{
						unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					}
					if (func_144())
					{
						func_56(0);
						iLocal_120 = 0;
					}
				}
				else if (unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					unk_0x776155158760E9F6(uLocal_91[0], 0, 0);
				}
			}
			else
			{
				if (unk_0x5237AF95232D78C5(uLocal_91[0], 0))
				{
					if (unk_0x96044E39418AAF17(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
					{
						unk_0x776155158760E9F6(uLocal_91[0], 0, 0);
					}
				}
				if (func_4() && !iLocal_120)
				{
					func_56(1);
					iLocal_120 = 1;
				}
			}
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 8f, 8f, 8f, 0, 1, 0) || unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x2DA8CA50A72528FB(uLocal_155[0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uLocal_155[0]));
				}
				if (!unk_0x2DA8CA50A72528FB(uLocal_102))
				{
					uLocal_102 = func_134(Local_81, 1);
				}
			}
			else
			{
				if (!unk_0x2DA8CA50A72528FB(uLocal_155[0]))
				{
					uLocal_155[0] = func_159(uLocal_91[0], 0, 145);
				}
				if (unk_0x2DA8CA50A72528FB(uLocal_102))
				{
					unk_0x07B8ECB35A4ED3AC(&uLocal_102);
				}
			}
		}
	}
	if (iLocal_54 == 2)
	{
		if ((!unk_0x1D403DFADBC2DE3C(iLocal_94, 0) && !unk_0x36CEFBE9B745A58D(uLocal_91[0])) && !unk_0x36CEFBE9B745A58D(uLocal_91[1]))
		{
			if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 150f, 150f, 150f, 0, 1, 0) || !unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (unk_0x724D816EA203A79E(uLocal_91[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
					{
						if (unk_0xD45C08B05D4687A7(uLocal_91[0]))
						{
							unk_0x57EB4CC8F1928A47(uLocal_91[0]);
						}
						unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
						unk_0x5558ED6D4A2DEC93(uLocal_91[0], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
						func_64(uLocal_91[0], 120000, 0);
						unk_0x22321800954A532E(uLocal_91[0], 1);
					}
				}
				if (unk_0x724D816EA203A79E(uLocal_91[1]))
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_91[1]))
					{
						if (unk_0xD45C08B05D4687A7(uLocal_91[1]))
						{
							unk_0x57EB4CC8F1928A47(uLocal_91[1]);
						}
						unk_0xA4E856A8CD53B8DF(uLocal_91[1]);
						unk_0x5558ED6D4A2DEC93(uLocal_91[1], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
						func_64(uLocal_91[1], 120000, 0);
						unk_0x22321800954A532E(uLocal_91[1], 1);
					}
				}
				func_60();
			}
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_94, 0))
			{
				if (unk_0x62F3A07C43FFB568(uLocal_91[0], iLocal_94, 0) && unk_0x62F3A07C43FFB568(uLocal_91[1], iLocal_94, 0))
				{
					if (func_144())
					{
						func_56(0);
						iLocal_120 = 0;
					}
					if (!unk_0x2DA8CA50A72528FB(uLocal_102))
					{
						uLocal_102 = func_134(Local_81, 1);
					}
				}
				if (unk_0x2DA8CA50A72528FB(uLocal_158))
				{
					unk_0x07B8ECB35A4ED3AC(&uLocal_158);
				}
			}
			else
			{
				if ((func_4() && !iLocal_120) && iLocal_64 > 3)
				{
					func_56(1);
					iLocal_120 = 1;
				}
				if (!unk_0x2DA8CA50A72528FB(uLocal_158))
				{
					uLocal_158 = func_142(iLocal_94, 0, 0);
				}
				if (unk_0x2DA8CA50A72528FB(uLocal_102))
				{
					unk_0x07B8ECB35A4ED3AC(&uLocal_102);
				}
			}
		}
	}
}

void func_132()
{
	if (func_17() == 2)
	{
		if (!Global_25514)
		{
			func_133("CULT_BLIP_HELP", -1);
			Global_25514 = 1;
		}
	}
}

void func_133(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

var func_134(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x390CF6C8AD6903B7(Param0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_135(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(uVar0, iParam3);
	return uVar0;
}

float func_135(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_136()
{
	if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (!func_141())
			{
				if (unk_0xD45C08B05D4687A7(uLocal_91[0]))
				{
					unk_0x57EB4CC8F1928A47(uLocal_91[0]);
				}
				if (unk_0xF4FCC3C1048FF2AB(uLocal_91[0], 1227113341) != 1 && unk_0xF4FCC3C1048FF2AB(uLocal_91[0], 1227113341) != 0)
				{
					unk_0x9565F9267674873A(uLocal_91[0], unk_0xBC25C936A095B5BA(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x5237AF95232D78C5(uLocal_91[0], 0))
				{
					unk_0xA3981DED4FC2E56E(uLocal_91[0], 0, 0);
				}
				if (!iLocal_122)
				{
					if (!func_4())
					{
						func_61(&uLocal_173, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_122 = 1;
					}
				}
			}
			else
			{
				iLocal_122 = 0;
				if (unk_0xF4FCC3C1048FF2AB(uLocal_91[0], 1227113341) == 1 && unk_0xF4FCC3C1048FF2AB(uLocal_91[0], 1227113341) == 0)
				{
					unk_0xA4E856A8CD53B8DF(uLocal_91[0]);
				}
			}
		}
		else if (!unk_0xD45C08B05D4687A7(uLocal_91[0]))
		{
			unk_0x75E3FA28CC7D5707(uLocal_91[0], func_57());
			unk_0x0AB3C2863B144B82(uLocal_91[0], 1);
			unk_0x59B9712C1EAB0092(uLocal_91[0], 0);
		}
	}
}

float func_137(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	if (!unk_0x1D403DFADBC2DE3C(uParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Var3, iParam2);
}

void func_138()
{
	if (!func_58())
	{
		if (func_17() == 2)
		{
			Global_25512 = 1;
		}
	}
}

void func_139(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_99);
				unk_0x44C98C11ED6DD327(0);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2060, 4);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), -1);
				unk_0x535008C596714F9E(uLocal_99);
				unk_0xA8E6405305C0D7DF(iParam0, uLocal_99);
				unk_0x02DAF06EA4F08219(&uLocal_99);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				if (!unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_140()
{
	if (func_17() == 0)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_170++;
		}
	}
	else if (func_17() == 1)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_170++;
		}
	}
	else if (func_17() == 2)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_170++;
		}
	}
}

int func_141()
{
	int iVar0;
	
	if (iLocal_54 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_54 == 2)
	{
		iVar0 = 2;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
		{
			if ((((((!unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()) && !unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) && !unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) && !unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) && !unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) && !unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA())) && !unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("rhino")))
			{
				if (unk_0x524ABB0435146845(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) >= iVar0)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		if (unk_0xE59B7F5A03335350(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()), 0))
		{
			if (((((!unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()))) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && !unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(int iParam0, bool bParam1, bool bParam2)
{
	return func_143(iParam0, !bParam1, bParam2);
}

int func_143(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_135(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_135(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_135(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_144()
{
	if (Global_16811 == 1)
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!iLocal_115)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_115 = 1;
				}
			}
			if (!iLocal_116)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_116 = 1;
				}
			}
		}
	}
}

void func_146()
{
	if (unk_0x2DA8CA50A72528FB(uLocal_151))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_151);
	}
	iLocal_63 = 0;
	while (iLocal_63 <= (iLocal_90 - 1))
	{
		if (!unk_0x2DA8CA50A72528FB(uLocal_155[iLocal_63]))
		{
			uLocal_155[iLocal_63] = func_159(uLocal_91[iLocal_63], 0, 145);
			unk_0x222805B89367761E(uLocal_155[iLocal_63], 0);
		}
		iLocal_63++;
	}
}

void func_147()
{
	unk_0xD02C58A9649E4D42();
	Global_16792 = 0;
}

void func_148(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_104276, unk_0x1377080E9B0BD993(), 24);
		Global_104270 = 1;
	}
	else
	{
		StringCopy(&Global_104276, "NULL", 24);
		Global_104270 = 0;
	}
}

int func_149(int iParam0)
{
	if (func_152())
	{
		Global_105210 = 1;
		Global_105207 = unk_0x105601648511CC64();
		if (func_43(Global_105209))
		{
			func_150(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_43(Global_105209))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_105220.f_24966.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_133(func_151(iParam0), -1);
					Global_105220.f_24966.f_2++;
					unk_0xF0059F27F7BB6680(&Global_105216, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Global_105216, 1))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_133(func_151(iParam0), -1);
					Global_105220.f_24966.f_3++;
					unk_0xF0059F27F7BB6680(&Global_105216, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_105216, 2))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_133(func_151(iParam0), -1);
					Global_105220.f_24966.f_4++;
					unk_0xF0059F27F7BB6680(&Global_105216, 2);
				}
			}
			break;
	}
}

char* func_151(int iParam0)
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

int func_152()
{
	switch (func_153(&Global_25336, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_153(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90578.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_157(0))
		{
			return 0;
		}
		Global_35869++;
		*uParam0 = Global_35869;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_17206.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_35905 = iParam2;
		Global_35867 = *uParam0;
		Global_35868 = iParam4;
		Global_35866 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35866 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35866)
			{
				if (Global_35872[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35867 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_155(iParam2))
		{
			return 0;
		}
		if (Global_35866 == 8)
		{
			return 0;
		}
		Global_35869++;
		*uParam0 = Global_35869;
		Global_35872[Global_35866 /*4*/] = Global_35869;
		Global_35872[Global_35866 /*4*/].f_1 = iParam1;
		Global_35872[Global_35866 /*4*/].f_2 = iParam2;
		Global_35872[Global_35866 /*4*/].f_3 = 0;
		Global_35866++;
		if (iParam4 != 0)
		{
			func_154(uParam0, iParam4);
		}
	}
	return 2;
}

void func_154(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35866 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35866)
	{
		if (Global_35872[iVar0 /*4*/] == *uParam0)
		{
			Global_35872[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_155(int iParam0)
{
	return func_156(iParam0, Global_35905);
}

int func_156(int iParam0, int iParam1)
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

int func_157(int iParam0)
{
	if (Global_35905 == 15)
	{
		return 0;
	}
	if (func_155(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_158(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 1;
	Global_16797 = 0;
	Global_16795 = iParam7;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

var func_159(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_143(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(uVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_105220.f_28021[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(uVar0, &(Global_105220.f_28021[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_160()
{
	if (func_162())
	{
		sLocal_113 = "drunk_idle_van";
		sLocal_114 = "vomit_van";
	}
	else if (func_161())
	{
		sLocal_113 = "drunk_idle_low";
		sLocal_114 = "vomit_low";
	}
	else
	{
		sLocal_113 = "drunk_idle";
		sLocal_114 = "vomit_outside";
	}
}

int func_161()
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(uLocal_91[0], 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(uLocal_91[0], 0), 0))
		{
			iVar0 = unk_0x83F8A448F340AE31(unk_0x9FE9D386222EEE47(uLocal_91[0], 0));
			if ((((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1887744178) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_162()
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(uLocal_91[0], 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(uLocal_91[0], 0), 0))
		{
			iVar0 = unk_0x83F8A448F340AE31(unk_0x9FE9D386222EEE47(uLocal_91[0], 0));
			if (((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184) || iVar0 == 1663892749)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_163()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iVar0 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			iVar1 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar1))
			{
				if (iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						if (!unk_0x1A6AA4082E241660(iVar1, unk_0xBC25C936A095B5BA()))
						{
							unk_0x56F2E1B5599188FA(iVar1, unk_0xBC25C936A095B5BA(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_164()
{
	if (!iLocal_61)
	{
		func_166(39, 1);
		func_166(40, 1);
		func_166(41, 1);
		func_166(42, 1);
		func_166(43, 1);
		func_166(44, 1);
		unk_0x6C5F5B5F6894CCE3(Local_68, 8f, 1, 0, 0, 0);
		unk_0x1DAA351326EA3537(Local_68 - Vector(8f, 8f, 8f), Local_68 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		unk_0x379ACE23D404525C(Local_76 - Vector(10f, 15f, 15f), Local_76 + Vector(10f, 15f, 15f), 0, 1);
		unk_0x379ACE23D404525C(Local_81 - Vector(10f, 15f, 15f), Local_81 + Vector(10f, 15f, 15f), 0, 1);
		unk_0xF0059F27F7BB6680(&uLocal_150, 5);
		if (func_17() == 0)
		{
			func_165(&uLocal_173, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		}
		else if (func_17() == 1)
		{
			func_165(&uLocal_173, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
		}
		else if (func_17() == 2)
		{
			func_165(&uLocal_173, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
		}
		unk_0xB2CB6EAA6B280A84("rghDrunkPeds", &uLocal_100);
		iLocal_94 = unk_0x61C05BF08A1E0EFE(iLocal_98, Local_76, fLocal_79, 1, 1, 0);
		unk_0x0E622862E5E566BB(iLocal_94);
		unk_0xF0A40F19AAB79E88(iLocal_94, 1084227584);
		unk_0x8510BC031C24B862(iLocal_98, 1);
		unk_0xD421BC740C5340C3(iLocal_94, 3);
		unk_0x6FA721E3E050370C(iLocal_94, 1);
		iLocal_80 = unk_0x8D66276473ABD7CC(iLocal_94);
		uLocal_91[0] = unk_0x01B3635C3E8EDD81(26, iLocal_96, Local_68, fLocal_71, 1, 1);
		unk_0x2E35C4FA5F0ED22F(uLocal_91[0], 1);
		unk_0x4106FAF8AA1D69D5(uLocal_91[0], uLocal_100);
		unk_0xC8FD3EBBB90E8D7F(uLocal_91[0], 185, 1);
		unk_0xABA7AE40608505F2(uLocal_91[0], 65536, 1);
		unk_0x2CA123B0622F495C(iLocal_96);
		unk_0x0DEF5E53360637F2(uLocal_91[0], 1);
		uLocal_91[1] = unk_0x01B3635C3E8EDD81(26, iLocal_97, Local_72, fLocal_75, 1, 1);
		unk_0x2E35C4FA5F0ED22F(uLocal_91[1], 1);
		unk_0x4106FAF8AA1D69D5(uLocal_91[1], uLocal_100);
		unk_0xC8FD3EBBB90E8D7F(uLocal_91[1], 185, 1);
		unk_0xABA7AE40608505F2(uLocal_91[1], 65536, 1);
		unk_0x0DEF5E53360637F2(uLocal_91[1], 1);
		unk_0xA902E18EDF6FA0C8(5, uLocal_100, joaat("player"));
		unk_0x2CA123B0622F495C(iLocal_97);
		if (iLocal_54 == 1)
		{
			unk_0xE896C0AD02364F2A(uLocal_91[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(uLocal_91[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x43B967881C60631D(uLocal_91[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			unk_0x43B967881C60631D(uLocal_91[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[0], 0, 1, 2, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[0], 3, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[0], 4, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[1], 0, 1, 1, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[1], 3, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[1], 4, 0, 1, 0);
			unk_0xD5DC0505375F4D00(iLocal_94, 1);
			unk_0xC8FD3EBBB90E8D7F(uLocal_91[0], 206, 1);
			unk_0xC8FD3EBBB90E8D7F(uLocal_91[0], 299, 1);
			unk_0xB105531EDD3DE51B(uLocal_91[0], 0);
			unk_0x36C3B58DA78A2679(uLocal_91[0], "REDR1Drunk1_AI_Drunk");
			unk_0x36C3B58DA78A2679(uLocal_91[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_165(&uLocal_173, 3, uLocal_91[0], "REDR1Drunk1", 0, 1);
			func_165(&uLocal_173, 4, uLocal_91[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_54 == 2)
		{
			unk_0x1DAA351326EA3537(Local_81 - Vector(10f, 50f, 30f), Local_81 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			unk_0xA73D1278857991A2(iLocal_94, 1);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[1], 0, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[1], 2, 0, 2, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[1], 3, 1, 1, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[1], 4, 1, 2, 0);
			unk_0xB0031DDAE4FF0BC3(uLocal_91[1], 8, 0, 0, 0);
			unk_0xC8FD3EBBB90E8D7F(uLocal_91[0], 134, 1);
			unk_0xC8FD3EBBB90E8D7F(uLocal_91[1], 134, 1);
			unk_0xC8FD3EBBB90E8D7F(uLocal_91[0], 26, 1);
			unk_0xC8FD3EBBB90E8D7F(uLocal_91[1], 26, 1);
			unk_0xC8FD3EBBB90E8D7F(uLocal_91[0], 206, 1);
			unk_0xC8FD3EBBB90E8D7F(uLocal_91[1], 206, 1);
			unk_0xB105531EDD3DE51B(uLocal_91[0], 0);
			unk_0xB105531EDD3DE51B(uLocal_91[1], 0);
			unk_0xA3A7138EAD2268A0(uLocal_91[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			unk_0x56F2E1B5599188FA(uLocal_91[0], uLocal_91[1], -1, 2060, 4);
			unk_0xA3A7138EAD2268A0(uLocal_91[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			unk_0x8941EA87BBF38C6F(uLocal_91[1], 0);
			unk_0x56F2E1B5599188FA(uLocal_91[1], uLocal_91[0], -1, 2060, 4);
			unk_0x43B967881C60631D(uLocal_91[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			unk_0x43B967881C60631D(uLocal_91[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			unk_0x36C3B58DA78A2679(uLocal_91[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			unk_0x36C3B58DA78A2679(uLocal_91[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_165(&uLocal_173, 3, uLocal_91[0], "REDR2DrunkM", 0, 1);
			func_165(&uLocal_173, 4, uLocal_91[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_61 = 1;
	}
}

void func_165(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_166(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_173(iParam0, 2, 1))
		{
			func_172(iParam0, 2, 1);
		}
	}
	else if (func_173(iParam0, 2, 1))
	{
		func_167(iParam0, 2, 1);
	}
}

void func_167(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_93007.f_1329[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_38() == 0)
		{
			uVar0 = func_170(func_171(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&uVar0, iParam1);
			func_168(func_171(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_668[iParam0]), iParam1);
	}
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_169(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, uParam1, iParam3);
	}
}

int func_169(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2530245[iParam0 /*3*/][func_169(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

void func_172(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_93007.f_1329[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_38() == 0)
		{
			uVar0 = func_170(func_171(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&uVar0, iParam1);
			func_168(func_171(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_668[iParam0]), iParam1);
	}
}

int func_173(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_93007.f_1329[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_38() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_170(func_171(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_174()
{
	unk_0xF243B7A14FCFD0F4(iLocal_96);
	unk_0xF243B7A14FCFD0F4(iLocal_98);
	unk_0xF243B7A14FCFD0F4(iLocal_97);
	if (iLocal_54 == 1)
	{
		unk_0xA8396BF0E2C53C39();
		unk_0x522053D86D6E1C7A("random@drunk_driver_1");
		unk_0xF632E62AC7874CD3("MOVE_M@DRUNK@VERYDRUNK");
		unk_0x284F2ACE6839D3C0("Taxi_Vomit", 0, -1);
	}
	else if (iLocal_54 == 2)
	{
		unk_0x522053D86D6E1C7A("random@drunk_driver_2");
		unk_0x522053D86D6E1C7A("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		unk_0x522053D86D6E1C7A("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	unk_0xF632E62AC7874CD3("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((unk_0xD6513D668481290A(iLocal_96) && unk_0xD6513D668481290A(iLocal_98)) && unk_0x3114757F155123AF("MOVE_M@DRUNK@MODERATEDRUNK")) && unk_0xD6513D668481290A(iLocal_97))
	{
		if (iLocal_54 == 1)
		{
			if (((unk_0x95654D7A61CD43DE() && unk_0xF9E082857622D91E("random@drunk_driver_1")) && unk_0x3114757F155123AF("MOVE_M@DRUNK@VERYDRUNK")) && unk_0x284F2ACE6839D3C0("CONSTRUCTION_ACCIDENT_1", 0, -1))
			{
				iLocal_56 = 1;
			}
		}
		else if (iLocal_54 == 2)
		{
			if ((unk_0xF9E082857622D91E("random@drunk_driver_2") && unk_0xF9E082857622D91E("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && unk_0xF9E082857622D91E("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_56 = 1;
			}
		}
	}
	else
	{
		unk_0xF243B7A14FCFD0F4(iLocal_96);
		unk_0xF243B7A14FCFD0F4(iLocal_98);
		unk_0xF243B7A14FCFD0F4(iLocal_97);
		if (iLocal_54 == 1)
		{
			unk_0xA8396BF0E2C53C39();
			unk_0x522053D86D6E1C7A("random@drunk_driver_1");
			unk_0xF632E62AC7874CD3("MOVE_M@DRUNK@VERYDRUNK");
			unk_0x284F2ACE6839D3C0("Taxi_Vomit", 0, -1);
		}
		else if (iLocal_54 == 2)
		{
			unk_0x522053D86D6E1C7A("random@drunk_driver_2");
			unk_0x522053D86D6E1C7A("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			unk_0x522053D86D6E1C7A("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		unk_0xF632E62AC7874CD3("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_175()
{
	if (iLocal_54 == 1)
	{
		Local_152 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_90 = 2;
		iLocal_96 = joaat("a_m_y_beachvesp_01");
		iLocal_97 = joaat("a_m_y_beachvesp_02");
		Local_68 = { -1016.762f, -1356.459f, 4.5531f };
		fLocal_71 = 247.8087f;
		Local_72 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_75 = 66.3861f;
		Local_76 = { -1027.762f, -1341.644f, 4.4614f };
		fLocal_79 = 76.9418f;
		iLocal_98 = joaat("baller2");
		Local_81 = { 160.8892f, -111.4167f, 61.2999f };
		Local_84 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_60 = true;
	}
	if (iLocal_54 == 2)
	{
		Local_152 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_90 = 2;
		iLocal_96 = joaat("a_m_y_genstreet_01");
		iLocal_97 = joaat("a_f_y_hipster_03");
		Local_68 = { 1893.856f, 3714.346f, 31.7771f };
		fLocal_71 = 252.0142f;
		Local_72 = { 1894.763f, 3714.16f, 31.7605f };
		fLocal_75 = 86.1102f;
		Local_76 = { 1888.256f, 3717.189f, 31.8394f };
		fLocal_79 = 299.4672f;
		iLocal_98 = joaat("emperor");
		Local_81 = { 1120.551f, 2647.307f, 36.9963f };
		Local_84 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_60 = true;
	}
}

int func_176()
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_187())
		{
			return 0;
		}
	}
	if (func_183())
	{
		return 1;
	}
	if (func_177(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_177(float fParam0, bool bParam1)
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
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_19(func_17()))
		{
			iVar36 = func_48();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_105220.f_18545[iVar32 /*6*/], 3))
				{
					func_178(iVar32, &Var0);
					fVar35 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var0.f_6, 1);
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

void func_178(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_179(uParam1, "Abigail1", func_181(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 1:
			func_179(uParam1, "Abigail2", func_181(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 2:
			func_179(uParam1, "Barry1", func_181(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 3:
			func_179(uParam1, "Barry2", func_181(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 4:
			func_179(uParam1, "Barry3", func_181(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 5:
			func_179(uParam1, "Barry3A", func_181(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 6:
			func_179(uParam1, "Barry3C", func_181(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 7:
			func_179(uParam1, "Barry4", func_181(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_180(iParam0), 0, 0);
			break;
		
		case 8:
			func_179(uParam1, "Dreyfuss1", func_181(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 9:
			func_179(uParam1, "Epsilon1", func_181(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 10:
			func_179(uParam1, "Epsilon2", func_181(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 11:
			func_179(uParam1, "Epsilon3", func_181(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 12:
			func_179(uParam1, "Epsilon4", func_181(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 13:
			func_179(uParam1, "Epsilon5", func_181(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 14:
			func_179(uParam1, "Epsilon6", func_181(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 15:
			func_179(uParam1, "Epsilon7", func_181(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 16:
			func_179(uParam1, "Epsilon8", func_181(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 17:
			func_179(uParam1, "Extreme1", func_181(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 18:
			func_179(uParam1, "Extreme2", func_181(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 19:
			func_179(uParam1, "Extreme3", func_181(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 20:
			func_179(uParam1, "Extreme4", func_181(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 21:
			func_179(uParam1, "Fanatic1", func_181(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 22:
			func_179(uParam1, "Fanatic2", func_181(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 23:
			func_179(uParam1, "Fanatic3", func_181(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_180(iParam0), 0, 1);
			break;
		
		case 24:
			func_179(uParam1, "Hao1", func_181(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_180(iParam0), 0, 1);
			break;
		
		case 25:
			func_179(uParam1, "Hunting1", func_181(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 26:
			func_179(uParam1, "Hunting2", func_181(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 27:
			func_179(uParam1, "Josh1", func_181(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 28:
			func_179(uParam1, "Josh2", func_181(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 29:
			func_179(uParam1, "Josh3", func_181(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 30:
			func_179(uParam1, "Josh4", func_181(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 31:
			func_179(uParam1, "Maude1", func_181(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 32:
			func_179(uParam1, "Minute1", func_181(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 33:
			func_179(uParam1, "Minute2", func_181(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 34:
			func_179(uParam1, "Minute3", func_181(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 35:
			func_179(uParam1, "MrsPhilips1", func_181(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 36:
			func_179(uParam1, "MrsPhilips2", func_181(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 37:
			func_179(uParam1, "Nigel1", func_181(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 38:
			func_179(uParam1, "Nigel1A", func_181(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 39:
			func_179(uParam1, "Nigel1B", func_181(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 40:
			func_179(uParam1, "Nigel1C", func_181(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 41:
			func_179(uParam1, "Nigel1D", func_181(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 42:
			func_179(uParam1, "Nigel2", func_181(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 43:
			func_179(uParam1, "Nigel3", func_181(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 44:
			func_179(uParam1, "Omega1", func_181(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 45:
			func_179(uParam1, "Omega2", func_181(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 46:
			func_179(uParam1, "Paparazzo1", func_181(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 47:
			func_179(uParam1, "Paparazzo2", func_181(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 48:
			func_179(uParam1, "Paparazzo3", func_181(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 49:
			func_179(uParam1, "Paparazzo3A", func_181(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 50:
			func_179(uParam1, "Paparazzo3B", func_181(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 51:
			func_179(uParam1, "Paparazzo4", func_181(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 52:
			func_179(uParam1, "Rampage1", func_181(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 54:
			func_179(uParam1, "Rampage3", func_181(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 55:
			func_179(uParam1, "Rampage4", func_181(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 56:
			func_179(uParam1, "Rampage5", func_181(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 53:
			func_179(uParam1, "Rampage2", func_181(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 57:
			func_179(uParam1, "TheLastOne", func_181(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 58:
			func_179(uParam1, "Tonya1", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 59:
			func_179(uParam1, "Tonya2", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 60:
			func_179(uParam1, "Tonya3", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 61:
			func_179(uParam1, "Tonya4", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 62:
			func_179(uParam1, "Tonya5", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_179(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_180(int iParam0)
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

struct<2> func_181(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_182(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_182(int iParam0)
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

int func_183()
{
	if (func_186() && !func_187())
	{
		return 1;
	}
	if (func_185() && func_184())
	{
		return 1;
	}
	return 0;
}

bool func_184()
{
	return Global_104938 > 0;
}

int func_185()
{
	if (Global_90022 != -1)
	{
		return 1;
	}
	return 0;
}

int func_186()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 20);
	}
	return 0;
}

int func_187()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_188()
{
	if (!func_155(5))
	{
		return 1;
	}
	if (func_183())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_187())
		{
			return 0;
		}
	}
	if (func_177(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_189()
{
	if ((Global_105209 == func_52() && unk_0x8520DF5301DD9811()) && Global_105210)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_192(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_105206 = 0;
	func_191();
}

void func_191()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), 1);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 0);
	}
}

void func_192(int iParam0)
{
	Global_105209 = iParam0;
}

int func_193(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_143601)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_52();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_234())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_187())
			{
				return 0;
			}
		}
		if (!Global_105220.f_9056)
		{
			return 0;
		}
		if (func_33(0))
		{
			return 0;
		}
		if (func_183())
		{
			return 0;
		}
		if (func_233())
		{
			return 0;
		}
		if (Global_105209 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_177(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_232(iParam3))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_231(func_17()) == 4 || func_231(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_230(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_229(Global_105220.f_24966.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x105601648511CC64() - Global_105211) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_228())
		{
			return 0;
		}
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!func_219(4))
		{
			return 0;
		}
		if (!func_155(5))
		{
			return 0;
		}
		if (func_218(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xBF697FA7422C0621(unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())))
		{
			if ((unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(377.153f, -717.567f, 10.0536f) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(320.9934f, 265.2515f, 82.1221f)) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_218(0, 0))
		{
			return 0;
		}
		if (Global_25423)
		{
			return 0;
		}
		if (func_232(30) && !func_218(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_105220.f_2354.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_105220.f_2354.f_539.f_2276[iVar4];
				if (func_217(iVar8))
				{
					if (func_195(iVar4))
					{
						if (!func_194(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Var5) < (210f * 210f))
							{
								if (func_17() != iVar4)
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

bool func_194(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_105220.f_2354.f_539.f_2276[iParam0];
	return func_196(iVar0);
}

int func_196(int iParam0)
{
	return func_197(iParam0, 1);
}

int func_197(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_217(iParam0))
	{
		return 0;
	}
	func_198(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_199(func_210(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_199(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_209(iParam0, iParam1))
	{
		iVar0 = func_208(iParam1);
		iVar1 = func_206(iParam0);
		iVar2 = (func_206(iParam0) - func_206(iParam1));
		iVar3 = (func_208(iParam0) - func_208(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_204(iParam0) - func_204(iParam1));
		iVar6 = (func_203(iParam0) - func_203(iParam1));
		iVar7 = (func_202(iParam0) - func_202(iParam1));
	}
	else
	{
		iVar0 = func_208(iParam0);
		iVar1 = func_206(iParam1);
		iVar2 = (func_206(iParam1) - func_206(iParam0));
		iVar3 = (func_208(iParam1) - func_208(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_204(iParam1) - func_204(iParam0));
		iVar6 = (func_203(iParam1) - func_203(iParam0));
		iVar7 = (func_202(iParam1) - func_202(iParam0));
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
		iVar4 = (iVar4 + func_201(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_200(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_200(float fParam0, float fParam1, float fParam2)
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

int func_201(int iParam0, int iParam1)
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

int func_202(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_203(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_204(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_205(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_206(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_207(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_208(int iParam0)
{
	return iParam0 & 15;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_217(iParam1) || !func_217(iParam0))
	{
		return 1;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_210()
{
	var uVar0;
	
	func_216(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_215(&uVar0, unk_0x7E09057438B9D216());
	func_214(&uVar0, unk_0x6E06C0DB9B43570D());
	func_213(&uVar0, unk_0xBE14F159908E4EE5());
	func_212(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_211(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_211(var uParam0, int iParam1)
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

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_206(*uParam0);
	if (iParam1 < 1 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_215(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_216(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_217(int iParam0)
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
	iVar0 = func_202(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_203(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_204(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_206(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_208(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 1 || iVar5 > func_201(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, int iParam1)
{
	if (unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_227()) || Global_104267) || Global_25279) || func_226()) || func_24(8, -1)) || func_225()) || func_224()) || func_223()) || func_222()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_227()) || Global_25279) || func_226()) || func_24(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_227()) || Global_104267) || Global_25279) || func_226()) || func_24(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_105220.f_7659.f_919[iVar0] == 5) || Global_36452 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_227()) || Global_104267) || Global_25279) || func_226()) || func_24(8, -1)) || func_225()) || func_224()) || func_222()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_227() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_24(8, -1)) || func_222()) || func_221()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_225()) || func_224()) || func_221()) || func_220())
						{
							return 0;
						}
						if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
						{
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_227()) || Global_25279) || func_226()) || func_24(8, -1)) || func_224()) || func_223()) || func_222()) || Global_105220.f_7659.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_227()) || func_224()) || Global_104267) || Global_25279) || func_226()) || Global_37057) || func_24(8, -1)) || func_223()) || func_221()) || func_222()) || Global_105220.f_7659.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_227()) || Global_104267) || Global_25279) || func_226()) || func_24(8, -1)) || func_223()) || func_221()) || func_225()) || func_224()) || func_222())
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

var func_220()
{
	return Global_92994.f_1;
}

int func_221()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 13);
	}
	return 0;
}

int func_222()
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	if (Global_71238)
	{
		return 1;
	}
	else if (Global_55961 && !Global_55967)
	{
		return 1;
	}
	return 0;
}

bool func_224()
{
	return Global_93007.f_322 > 0;
}

bool func_225()
{
	return Global_93007.f_321 > 0;
}

var func_226()
{
	return Global_1312854;
}

int func_227()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_90578.f_44 == 1;
	}
	return 0;
}

int func_228()
{
	func_16();
	if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_229(int iParam0)
{
	return func_209(func_210(), iParam0);
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
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

int func_231(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_105220.f_7659.f_919[iParam0];
}

bool func_232(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_234())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_105220.f_24966, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xFA30DFD0084E92FE(Global_105220.f_24966.f_1, iVar0);
	}
	return bVar1;
}

int func_233()
{
	int iVar0;
	
	if (Global_25427)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_234()
{
	var uVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF0059F27F7BB6680(&uVar0, 2);
				unk_0xF0059F27F7BB6680(&uVar0, 4);
				unk_0xF0059F27F7BB6680(&uVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_235()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if ((unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		}
	}
	if (iLocal_172)
	{
		func_272(0);
		if (Global_25516)
		{
			unk_0x3857DADBD6EC8A54("AC_STOP");
		}
		func_271();
		func_6();
		unk_0x9E49B134E3245BA6(0);
		unk_0xB830DBD32591E1BC();
		unk_0x379ACE23D404525C(Local_76 - Vector(10f, 15f, 15f), Local_76 + Vector(10f, 15f, 15f), 1, 1);
		unk_0x379ACE23D404525C(Local_81 - Vector(10f, 15f, 15f), Local_81 + Vector(10f, 15f, 15f), 1, 1);
		func_148(0);
		if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
		{
			if (!unk_0x5CAE759AE8219D20(unk_0x3E12B546F3F2597A()))
			{
				unk_0x77815D3407C6700D(unk_0x3E12B546F3F2597A(), 1, 0);
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iLocal_95, 0))
		{
			if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_95, 0) && func_137(unk_0xBC25C936A095B5BA(), iLocal_95, 1) > 50f)
			{
				func_247(iLocal_95, 0, 145);
			}
		}
		if (unk_0x724D816EA203A79E(uLocal_91[0]))
		{
			if (!unk_0x36CEFBE9B745A58D(uLocal_91[0]))
			{
				unk_0xC8FD3EBBB90E8D7F(uLocal_91[0], 317, 1);
				if (!unk_0x5237AF95232D78C5(uLocal_91[0], 0))
				{
					unk_0x9E410F8AFFC2894E(uLocal_91[0]);
				}
				if (unk_0xD45C08B05D4687A7(uLocal_91[0]))
				{
					unk_0x57EB4CC8F1928A47(uLocal_91[0]);
				}
			}
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (unk_0x724D816EA203A79E(uLocal_91[iLocal_63]))
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_91[iLocal_63]))
				{
					unk_0xC8FD3EBBB90E8D7F(uLocal_91[iLocal_63], 317, 1);
					if (!unk_0x5237AF95232D78C5(uLocal_91[iLocal_63], 0))
					{
						unk_0x9E410F8AFFC2894E(uLocal_91[iLocal_63]);
					}
					unk_0xB105531EDD3DE51B(uLocal_91[iLocal_63], 1);
					unk_0xA902E18EDF6FA0C8(255, uLocal_100, joaat("player"));
					unk_0x2E35C4FA5F0ED22F(uLocal_91[iLocal_63], 0);
				}
				unk_0x02537C8C1BEEB477(&(uLocal_91[iLocal_63]));
			}
			iLocal_63++;
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_155[iLocal_63]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_155[iLocal_63]));
			}
			iLocal_63++;
		}
		if (iLocal_54 == 1)
		{
			unk_0x832ADB79A274D4E9(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (unk_0xEF0E25DA0CB6E8FF(uLocal_127))
		{
			if (unk_0xEDEA6C8F42EE05F6(uLocal_127))
			{
				unk_0x348665177DBFB93B(uLocal_127, 0);
			}
		}
	}
	func_236(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_236(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_189())
	{
		func_240(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_105211 = unk_0x105601648511CC64();
		func_239(30000);
		StringCopy(&cVar0, func_238(Global_105209, 1), 64);
		if (func_51(Global_105209) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_105208, 64);
		}
		unk_0x3D65262152B53A67(&cVar0, Global_105206, (unk_0x105601648511CC64() - Global_105207), 0);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105216, 0) && Global_105220.f_24966.f_2 < 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_105216, 0);
	}
	func_237(&Global_25336);
	Global_105210 = 0;
	func_192(-1);
}

void func_237(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35867)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35866 = 0;
	Global_35868 = 0;
	Global_35905 = 15;
	Global_55964 = 0;
	Global_55965 = 0;
}

char* func_238(int iParam0, bool bParam1)
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

void func_239(int iParam0)
{
	Global_36456 = (unk_0x105601648511CC64() + iParam0);
}

void func_240(int iParam0)
{
	func_241(iParam0, 0, func_246(iParam0));
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_210();
	func_244(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_243(iParam0, &uVar0);
	Var1 = { func_242(&uVar0) };
}

struct<16> func_242(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_204(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_203(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_205(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_208(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_206(*uParam0), 64);
	return Var0;
}

void func_243(int iParam0, var uParam1)
{
	Global_105220.f_24966.f_43[iParam0] = *uParam1;
}

void func_244(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_206(*uParam0);
	iVar1 = func_208(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_204(*uParam0);
	iVar4 = func_203(*uParam0);
	iVar5 = func_202(*uParam0);
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
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_245(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_216(uParam0, iParam1);
	func_215(uParam0, iParam2);
	func_214(uParam0, iParam3);
	func_212(uParam0, iParam5);
	func_213(uParam0, iParam4);
	func_211(uParam0, iParam6);
}

int func_246(int iParam0)
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

int func_247(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x0B00D4CDDAB33814(iParam0, &uVar0);
		if (!unk_0xF1734B55490E9045(uVar1))
		{
			if (unk_0x56BEECB328B6D29D(uVar1) == unk_0x56BEECB328B6D29D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_248(iParam0, iParam2);
	return 1;
}

void func_248(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_254(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_105220.f_2354.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_105220.f_32546.f_5592[iVar1] = iVar2;
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
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_105220.f_32546.f_5590 = iParam1;
	Global_70705 = iParam0;
	Global_105220.f_32546.f_5588 = 1;
	func_249(iParam0, &(Global_105220.f_32546.f_5510));
}

void func_249(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_253(uParam1);
		uParam1->f_66 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x2629793241883F74(iParam0);
		uParam1->f_67 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_69 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_70 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_252(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_68 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_66))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 12);
		}
		func_251(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_250(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 27);
		}
	}
}

int func_250(int iParam0)
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

int func_251(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
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
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_253(var uParam0)
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

int func_254(int iParam0)
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_269(iParam0, 0, 0)) || func_269(iParam0, 1, 0)) || func_269(iParam0, 2, 0)) || func_268(iParam0) != 145) || func_267(iParam0)) || func_266(iParam0)) || func_265(iParam0)) || func_264(iParam0)) || !func_255(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_266(iParam0))
		{
		}
		if (func_266(iParam0))
		{
		}
		if (func_269(iParam0, 0, 0))
		{
		}
		if (func_269(iParam0, 1, 0))
		{
		}
		if (func_269(iParam0, 2, 0))
		{
		}
		if (func_268(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_255(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
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

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_234())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1.f_0))
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
		if ((((!func_263() && !func_262()) && !func_261()) && !func_260()) && !func_234())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_261())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_259(iParam0))
		{
			return 0;
		}
	}
	if (!func_257(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_258())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
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
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_258()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2498869)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12299) && iVar1 < Global_262145.f_12300)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13597 && iVar1 < Global_262145.f_13609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13593 && iVar1 < Global_262145.f_13605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13594 && iVar1 < Global_262145.f_13606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13595 && iVar1 < Global_262145.f_13607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13596 && iVar1 < Global_262145.f_13608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13598 && iVar1 < Global_262145.f_13610)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13599 && iVar1 < Global_262145.f_13602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13600 && iVar1 < Global_262145.f_13603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13601 && iVar1 < Global_262145.f_13604)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16228 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16223 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16227 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16226 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16220 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16221 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16224 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16225 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16222 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16230 && iVar1 < Global_262145.f_16195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16231 && iVar1 < Global_262145.f_16196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16219 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16218 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16217 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16229 && iVar1 < Global_262145.f_16194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16232 && iVar1 < Global_262145.f_16197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16233 && iVar1 < Global_262145.f_16198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16234 && iVar1 < Global_262145.f_16199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16235 && iVar1 < Global_262145.f_16200)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16380 && iVar1 < Global_262145.f_16402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16381 && iVar1 < Global_262145.f_16403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16382 && iVar1 < Global_262145.f_16404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16383 && iVar1 < Global_262145.f_16405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16384 && iVar1 < Global_262145.f_16406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16385 && iVar1 < Global_262145.f_16407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16387 && iVar1 < Global_262145.f_16408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16388 && iVar1 < Global_262145.f_16409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16389 && iVar1 < Global_262145.f_16410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16390 && iVar1 < Global_262145.f_16411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16391 && iVar1 < Global_262145.f_16412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16392 && iVar1 < Global_262145.f_16413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16393 && iVar1 < Global_262145.f_16414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16399 && iVar1 < Global_262145.f_16421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16396 && iVar1 < Global_262145.f_16417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16397 && iVar1 < Global_262145.f_16418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16398 && iVar1 < Global_262145.f_16419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16386 && iVar1 < Global_262145.f_16420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16400 && iVar1 < Global_262145.f_16422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16394 && iVar1 < Global_262145.f_16415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16395 && iVar1 < Global_262145.f_16416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16401 && iVar1 < Global_262145.f_16423)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18029 && iVar1 < Global_262145.f_18127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18030 && iVar1 < Global_262145.f_18128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18031 && iVar1 < Global_262145.f_18129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18032 && iVar1 < Global_262145.f_18130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18033 && iVar1 < Global_262145.f_18131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18034 && iVar1 < Global_262145.f_18132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18035 && iVar1 < Global_262145.f_18133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18036 && iVar1 < Global_262145.f_18134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18037 && iVar1 < Global_262145.f_18135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18038 && iVar1 < Global_262145.f_18136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18039 && iVar1 < Global_262145.f_18137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18040 && iVar1 < Global_262145.f_18138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18041 && iVar1 < Global_262145.f_18139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18042 && iVar1 < Global_262145.f_18140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18043 && iVar1 < Global_262145.f_18141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18044 && iVar1 < Global_262145.f_18142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18045 && iVar1 < Global_262145.f_18143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18046 && iVar1 < Global_262145.f_18144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18047 && iVar1 < Global_262145.f_18145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18048 && iVar1 < Global_262145.f_18146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18049 && iVar1 < Global_262145.f_18147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18050 && iVar1 < Global_262145.f_18148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18051 && iVar1 < Global_262145.f_18149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18052 && iVar1 < Global_262145.f_18150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18053 && iVar1 < Global_262145.f_18151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19110 && iVar1 < Global_262145.f_19106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19111 && iVar1 < Global_262145.f_19107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19112 && iVar1 < Global_262145.f_19108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19113 && iVar1 < Global_262145.f_19109)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19989 && iVar1 < Global_262145.f_19997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19990 && iVar1 < Global_262145.f_19998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19991 && iVar1 < Global_262145.f_19999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19992 && iVar1 < Global_262145.f_20000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19993 && iVar1 < Global_262145.f_20001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19994 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20766 && iVar1 < Global_262145.f_20786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20778 && iVar1 < Global_262145.f_20798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20769 && iVar1 < Global_262145.f_20789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20779 && iVar1 < Global_262145.f_20799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20767 && iVar1 < Global_262145.f_20787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20783 && iVar1 < Global_262145.f_20803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20781 && iVar1 < Global_262145.f_20801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20782 && iVar1 < Global_262145.f_20802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20777 && iVar1 < Global_262145.f_20797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20784 && iVar1 < Global_262145.f_20804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20780 && iVar1 < Global_262145.f_20800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20776 && iVar1 < Global_262145.f_20796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20768 && iVar1 < Global_262145.f_20788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20770 && iVar1 < Global_262145.f_20790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20771 && iVar1 < Global_262145.f_20791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20772 && iVar1 < Global_262145.f_20792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20773 && iVar1 < Global_262145.f_20793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20774 && iVar1 < Global_262145.f_20794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20775 && iVar1 < Global_262145.f_20795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21727 && iVar1 < Global_262145.f_21755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21728 && iVar1 < Global_262145.f_21756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21729 && iVar1 < Global_262145.f_21757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21730 && iVar1 < Global_262145.f_21758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21731 && iVar1 < Global_262145.f_21759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21732 && iVar1 < Global_262145.f_21760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21733 && iVar1 < Global_262145.f_21761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21734 && iVar1 < Global_262145.f_21762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21735 && iVar1 < Global_262145.f_21763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21736 && iVar1 < Global_262145.f_21764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21737 && iVar1 < Global_262145.f_21765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21738 && iVar1 < Global_262145.f_21766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21739 && iVar1 < Global_262145.f_21767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21740 && iVar1 < Global_262145.f_21768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21741 && iVar1 < Global_262145.f_21769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21742 && iVar1 < Global_262145.f_21770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21743 && iVar1 < Global_262145.f_21771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21744 && iVar1 < Global_262145.f_21772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21745 && iVar1 < Global_262145.f_21773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21746 && iVar1 < Global_262145.f_21774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21747 && iVar1 < Global_262145.f_21775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21748 && iVar1 < Global_262145.f_21776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21749 && iVar1 < Global_262145.f_21777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21750 && iVar1 < Global_262145.f_21778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21751 && iVar1 < Global_262145.f_21779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21752 && iVar1 < Global_262145.f_21780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21753 && iVar1 < Global_262145.f_21781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21754 && iVar1 < Global_262145.f_21782)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22920 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22919 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22918 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22921 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22917 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_22997 && iVar1 < Global_262145.f_22984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_22998 && iVar1 < Global_262145.f_22985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23003 && iVar1 < Global_262145.f_22990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23002 && iVar1 < Global_262145.f_22989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23000 && iVar1 < Global_262145.f_22987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23006 && iVar1 < Global_262145.f_22993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23008 && iVar1 < Global_262145.f_22995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23009 && iVar1 < Global_262145.f_22996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23007 && iVar1 < Global_262145.f_22994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_22999 && iVar1 < Global_262145.f_22986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23001 && iVar1 < Global_262145.f_22988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23005 && iVar1 < Global_262145.f_22992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23004 && iVar1 < Global_262145.f_22991)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_260()
{
	return 0;
}

int func_261()
{
	return 1;
}

int func_262()
{
	return 1;
}

int func_263()
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	uVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_256(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_90461[iVar0]))
		{
			if (Global_90461[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_266(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_90431[iVar0]) && unk_0xE59B7F5A03335350(Global_90431[iVar0], 0))
			{
				if (Global_90431[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_69800.f_484[24]))
	{
		if (iParam0 == Global_69800.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69800.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				return Global_90441[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_269(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_270(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iVar9], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_270(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_271()
{
	Global_25512 = 0;
	Global_25513 = 0;
	Global_25515 = 0;
	Global_25516 = 0;
	Global_25517 = 0;
}

void func_272(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_166(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_273()
{
	float fVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		fVar0 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_339, 1);
		iLocal_338 = 1;
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_342, 1) < fVar0)
		{
			fVar0 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_342, 1);
			iLocal_338 = 2;
		}
		if (iLocal_338 == 1)
		{
			iLocal_345 = 1;
			iLocal_54 = 1;
			return Local_339;
		}
		if (iLocal_338 == 2)
		{
			iLocal_345 = 2;
			iLocal_54 = 2;
			return Local_342;
		}
	}
	return 0f, 0f, 0f;
}

