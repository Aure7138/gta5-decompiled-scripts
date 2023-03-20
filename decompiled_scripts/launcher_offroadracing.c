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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	float fLocal_117 = 0f;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	int iLocal_124 = 0;
	struct<3> Local_125[5];
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150[5] = { 0, 0, 0, 0, 0 };
	float fLocal_156 = 0f;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 16;
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
	int iLocal_328 = 0;
	struct<100> Local_329 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
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
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	bLocal_118 = true;
	iLocal_119 = 6;
	iLocal_120 = 18;
	iLocal_124 = -1;
	bLocal_158 = true;
	iLocal_159 = 1;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	iLocal_86 = iLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0x9CEB376419A71A96(82))
	{
		func_145(1);
	}
	uLocal_85 = unk_0x44A9253132E1DDE0(unk_0xE0BDAFA1A39552D6());
	iLocal_95 = 0;
	func_143(&Global_99839, 0);
	func_137();
	unk_0xAD6C1412D05CFBD7(1);
	if (func_136(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31517)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_136(uLocal_94, 8))
	{
		if (!func_134(iLocal_100))
		{
			if (func_133(0, iLocal_99))
			{
				func_145(0);
			}
			else
			{
				func_145(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_133(0, iLocal_99))
		{
			bLocal_118 = false;
		}
	}
	if (func_136(uLocal_94, 8388608))
	{
		func_145(1);
	}
	if (func_136(uLocal_94, 524288) && (func_132() && !func_131()))
	{
		func_145(1);
	}
	if (unk_0x98934607F8D0FB03(unk_0xFC71FD0B03208C77()) > 1 && !func_136(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_130(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_129(10);
	}
	while (true)
	{
		if (!func_136(uLocal_94, 268435456))
		{
			fVar1 = 0f;
			if (unk_0x00FBAE9BB89D4FC2(ScriptParam_0.f_1[0 /*3*/], &fVar1, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_128(&uLocal_94, 268435456);
				}
			}
		}
		uLocal_85 = unk_0x44A9253132E1DDE0(unk_0xE0BDAFA1A39552D6());
		if (func_136(uLocal_94, 1048576))
		{
			if (unk_0xBDA1F5E8A36BFA07(uLocal_85, 0))
			{
				func_145(1);
			}
		}
		if (unk_0xC1EDB61CE0A4B94E(iLocal_85) && !unk_0xBDA1F5E8A36BFA07(iLocal_85, 0))
		{
			Local_87 = { unk_0xF4745590D18D14B8(iLocal_85, 1) };
			fLocal_93 = unk_0xB7A628320EFF8E47(Local_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_111.f_2 = 0f;
			Local_114.f_2 = 0f;
			fLocal_110 = unk_0xB7A628320EFF8E47(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_134(iLocal_100) || (func_136(uLocal_94, 16) && !func_136(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_124();
						func_129(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_130(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_129(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_122() && fLocal_93 > ((fLocal_117 * 1.5f) * (fLocal_117 * 1.5f)))
					{
						iLocal_103 = iLocal_103;
						func_129(3);
					}
					else
					{
						func_124();
					}
					break;
				
				case 3:
					if (unk_0xE5302F426D0500D6())
					{
						func_145(1);
						return;
					}
					if (!func_134(iLocal_100))
					{
						if (!func_136(uLocal_94, 8))
						{
							bVar2 = true;
							if (unk_0x2F6869889D97DFED(&(Global_91310.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_145(0);
								break;
							}
						}
					}
					if (!func_136(uLocal_94, 4))
					{
						func_111();
						func_128(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_91344)
					{
						if (iLocal_105 != 263)
						{
							if (func_110(6) && !func_109(iLocal_105))
							{
							}
							else
							{
								func_130(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_129(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar3 = !func_136(uLocal_94, 64);
						func_143(&uLocal_94, 128);
						if (!func_108(3) && !Global_91344)
						{
							if (func_136(uLocal_94, 2097152))
							{
								if ((!func_136(uLocal_94, 1) || !unk_0xC1EDB61CE0A4B94E(func_107())) && !Global_91344)
								{
									func_129(10);
									break;
								}
							}
						}
						if (func_136(uLocal_94, 524288) && (func_132() && !func_131()))
						{
							func_145(1);
						}
						if (func_106())
						{
							func_145(1);
						}
						if ((!func_98(6) || Global_100233) || func_97())
						{
							bVar3 = false;
						}
						if (!bLocal_118)
						{
							func_95(&uLocal_94, 128);
							bVar3 = false;
						}
						if (func_136(uLocal_94, 1))
						{
							if (!func_94())
							{
								func_95(&uLocal_94, 128);
								bVar3 = false;
							}
						}
						if (func_93(1))
						{
							bVar3 = false;
						}
						if (Global_69521)
						{
							bVar3 = false;
						}
						if (func_92())
						{
							bVar3 = false;
						}
						if (unk_0xAD79840A082ADD7F())
						{
							bVar3 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0xFAA527C349D56C09(unk_0xE0BDAFA1A39552D6()))
						{
							bVar3 = false;
						}
						if (!unk_0x1EDDA235B077A4A1(unk_0xE0BDAFA1A39552D6()))
						{
							bVar3 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x8853522CEFF93BE9(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar3 = false;
							}
							iVar4 = unk_0xEC5C0F25A9A364A0();
							if (iLocal_119 > iLocal_120)
							{
								if (iVar4 < iLocal_119 && iVar4 >= iLocal_120)
								{
									func_95(&uLocal_94, 128);
									bVar3 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_136(uLocal_94, 134217728))
										{
											func_87("MG_NA_TIME", iLocal_119, iLocal_120);
											func_95(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_143(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_119 || iVar4 >= iLocal_120)
							{
								func_95(&uLocal_94, 128);
								bVar3 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_136(uLocal_94, 134217728))
									{
										func_87("MG_NA_TIME", iLocal_119, iLocal_120);
										func_95(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_143(&uLocal_94, 134217728);
								}
							}
							if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0xD3D729A98DEDDAFB(0, 51);
								if (func_86(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_85(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_95(&uLocal_94, 2048);
									}
									else if (!func_136(uLocal_94, 2048) || !unk_0x6146EFE5BC2DD8DC())
									{
										func_84(&iLocal_96);
										func_143(&uLocal_94, 2048);
									}
									if (func_82(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_84(&iLocal_96);
										func_143(&uLocal_94, 2048);
										unk_0x47CCE1B84DDCD2A7(&Local_69);
										unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 0, 56);
										func_129(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_84(&iLocal_96);
									func_143(&uLocal_94, 2048);
									unk_0x47CCE1B84DDCD2A7(&Local_69);
									unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 0, 56);
									func_129(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_96 != -1)
							{
								func_84(&iLocal_96);
								func_143(&uLocal_94, 2048);
								unk_0x310F6B4E168A8F5D(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0xD3D729A98DEDDAFB(0, 51);
					if (unk_0x04D070195A8178CD(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_84(&iLocal_96);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_136(uLocal_94, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_47(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0xBDA1F5E8A36BFA07(iLocal_86, 0))
							{
								unk_0x768B37F1452D4834(&iLocal_86);
							}
							if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
							{
								unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
							}
							func_46();
							if (Global_36870)
							{
								func_37(unk_0x06736567F820A39E());
							}
							unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 56);
							uLocal_52 = func_36();
							func_95(&uLocal_94, 2);
							func_129(6);
							func_32(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_31(iLocal_99);
								func_29(func_30(iLocal_99), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_28();
						}
						else if (iVar5 == 0)
						{
							func_129(10);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 6:
					if (func_136(Global_99839, 262144))
					{
						func_143(&Global_99839, 262144);
						func_27();
					}
					if (func_136(uLocal_94, 2097152))
					{
						if (!func_108(3) && !unk_0xDF49ABF9204CC801(uLocal_52))
						{
							func_129(10);
						}
					}
					if (!unk_0xDF49ABF9204CC801(uLocal_52))
					{
						unk_0x839EC6E89C3E2564(unk_0xF2DB717A73826179((func_23(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_22(&uLocal_107);
						func_143(&uLocal_94, 256);
						func_21();
						if (bVar0)
						{
							func_143(&uLocal_94, 2);
						}
						else if (func_136(uLocal_94, 2))
						{
							if (func_136(Global_99839, 0))
							{
								func_20(&iLocal_98);
								iLocal_98 = -1;
								func_143(&uLocal_94, 2);
							}
							else
							{
								func_20(&iLocal_98);
								iLocal_98 = -1;
								func_143(&uLocal_94, 2);
							}
						}
						func_129(0);
						if (iLocal_99 != -1)
						{
							if (func_136(Global_99839, 0))
							{
								unk_0x5725B6A7F77B9D92(func_30(iLocal_99), 0, Global_91347, 0);
								func_19(func_30(iLocal_99), 0, Global_91347, 1, 0);
							}
							else
							{
								unk_0x5725B6A7F77B9D92(func_30(iLocal_99), 0, Global_91347, 0);
								func_19(func_30(iLocal_99), 0, Global_91347, 0, 0);
							}
						}
						func_5();
						func_143(&Global_99839, 0);
						if (func_136(uLocal_94, 16777216))
						{
							func_145(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101186.f_7851)
							{
								if (!func_133(0, iLocal_99))
								{
									func_145(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_129(0);
					break;
				
				case 10:
					func_145(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_130(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_129(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_130(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_84(&iLocal_96);
					}
					if (!unk_0x226FA58470A21AEF(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x310F6B4E168A8F5D(1);
						}
					}
					func_129(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_134(iLocal_100) && func_133(0, iLocal_99))
									{
										func_137();
										if (iLocal_105 != 263)
										{
											func_130(iLocal_105, 1, 0);
										}
										func_129(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_130(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_129(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_137();
									if (iLocal_105 != 263)
									{
										func_130(iLocal_105, 1, 0);
									}
									func_129(0);
								}
							}
						}
						else
						{
							func_130(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_2()
{
	char* sVar0;
	
	func_3(&(Local_329.f_71));
	func_3(&(Local_329.f_77));
	func_3(&(Local_329.f_99));
	unk_0x6B09668CBB188BED("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x6B09668CBB188BED("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x6B09668CBB188BED("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x6B09668CBB188BED("amb@world_human_aa_smoke@male@idle_a");
	unk_0x6B09668CBB188BED("random@street_race");
	unk_0x6B09668CBB188BED("gestures@m@standing@casual");
	switch (iLocal_124)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0x226FA58470A21AEF(sVar0))
	{
		if (unk_0x35BEE533650C4BBF(sVar0))
		{
			if (unk_0xA472659498B908A8(sVar0))
			{
				unk_0x9ECF8C009A69E945(sVar0, 0);
			}
		}
	}
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x0B87AFC0B2EECA19((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_136(Global_101186.f_17782, 1))
	{
		func_143(&(Global_101186.f_17782), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_91349.f_8)
	{
		if (Global_91349.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91349.f_10 > 1)
	{
		return 0;
	}
	Global_91349.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

void func_8()
{
	if (Global_101186.f_17782.f_18 < Global_101186.f_17782.f_19[iLocal_124] || Global_101186.f_17782.f_19[iLocal_124] == 0)
	{
		Global_101186.f_17782.f_19[iLocal_124] = Global_101186.f_17782.f_18;
		Global_101186.f_17782.f_18 = 999;
	}
	if (iLocal_124 == Global_101186.f_17782.f_1 || Global_101186.f_17782.f_1 == -1)
	{
		if (Global_101186.f_17782.f_1 != 5)
		{
			Global_101186.f_17782.f_1++;
			switch (Global_101186.f_17782.f_1)
			{
				case 1:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					break;
				
				case 2:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					break;
				
				case 3:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					break;
				
				case 4:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					func_17(73, 1);
					func_130(74, 1, 0);
					break;
				
				case 5:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					func_17(73, 1);
					func_130(74, 1, 0);
					func_17(74, 1);
					func_130(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_130(70, 1, 0);
			func_17(70, 1);
			func_130(71, 1, 0);
			func_17(71, 1);
			func_130(73, 1, 0);
			func_17(73, 1);
			func_130(74, 1, 0);
			func_17(74, 1);
			func_130(75, 1, 0);
			func_17(75, 1);
			func_130(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_101186.f_17782.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 4);
	}
	if (Global_25461 == 1)
	{
		Global_25462 = 1;
	}
	Global_25461 = 1;
	unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 5);
	}
	if (Global_25461 == 1)
	{
		Global_25462 = 1;
	}
	Global_25461 = 1;
	unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 11);
	}
	if (Global_25461 == 1)
	{
		Global_25462 = 1;
	}
	Global_25461 = 1;
	unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2F6869889D97DFED(sParam0, ""))
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
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x2F6869889D97DFED(&(Global_101186.f_25011[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101186.f_25011.f_145 < 9)
	{
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_4), sParam1, 16);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_8 = (unk_0x1ADBAAC322D61F73() + iParam3);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_9 = iParam5;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_11 = iParam6;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_12 = uParam2;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_13 = iParam7;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_14 = iParam8;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = ((unk_0x1ADBAAC322D61F73() + iParam3) + iParam4);
		}
		else
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = -1;
		}
		Global_101186.f_25011.f_145++;
		func_16();
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101186.f_25011.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[0])
			{
				Global_101186.f_25011.f_146[0] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[1])
			{
				Global_101186.f_25011.f_146[1] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[2])
			{
				Global_101186.f_25011.f_146[2] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 20);
	}
	if (Global_25461 == 1)
	{
		Global_25462 = 1;
	}
	Global_25461 = 1;
	unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	unk_0x7D8DE5785179FF3F();
	unk_0xB0BAAEC428FBAC79();
	switch (iLocal_124)
	{
		case 0:
			unk_0x2CC7DF532DFC8592(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			unk_0x2CC7DF532DFC8592(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x2CC7DF532DFC8592(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x2CC7DF532DFC8592(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x2CC7DF532DFC8592(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x226FA58470A21AEF(&Global_88713))
	{
		return;
	}
	if (unk_0xFF0C0CA027E9E14F(sParam0, &Global_88713, 0, -1) != 0)
	{
		return;
	}
	unk_0x771A216A1F6E2125(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85820);
	StringCopy(&Global_88713, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35704)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35703 = 0;
	Global_35705 = 0;
	Global_35742 = 15;
	Global_55777 = 0;
	Global_55778 = 0;
}

void func_21()
{
	char cVar0[24];
	
	if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
	{
		unk_0xB1AB2AC3722F7760(StackVal, 0, 0, 0);
	}
	else if (unk_0x7E8E236FA7C5423B() || unk_0x8B003E1580113906())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xB21713E7233B6EEA(0, &cVar0);
	}
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_23(var uParam0)
{
	if (func_26(uParam0))
	{
		if (func_25(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_24(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_24(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x1ADBAAC322D61F73());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x17CC0D5008835470())
	{
		iVar2 = unk_0x201D90648B2AE3CE();
		return (unk_0xBBDA792448DB5A89(iVar2) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x1ADBAAC322D61F73()) / 1000f);
}

bool func_25(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(*uParam0, 2);
}

bool func_26(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(*uParam0, 1);
}

int func_27()
{
	func_8();
	return 1;
}

void func_28()
{
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x226FA58470A21AEF(&Global_88713))
	{
		unk_0x771A216A1F6E2125(&Global_88713, 0, 0, 0, 1, 0);
		StringCopy(&Global_88713, "", 64);
	}
	StringCopy(&Global_88713, sParam0, 64);
	unk_0x64C07D8BBC25E745(sParam0, iParam1, iParam2, func_7(0));
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_31(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
	{
		uVar0 = iParam0;
		unk_0xB1AB2AC3722F7760(8, &uVar0, 1, 1);
	}
	else if (unk_0x7E8E236FA7C5423B() || unk_0x8B003E1580113906())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xB21713E7233B6EEA(8, &cVar1);
	}
}

void func_32(var uParam0)
{
	if (!func_26(uParam0))
	{
		func_35(uParam0);
	}
	else
	{
		func_33(uParam0);
	}
}

void func_33(var uParam0)
{
	func_34(uParam0, 0f);
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - fParam1);
	unk_0xE27C8E42A97895CF(uParam0, 1);
	unk_0x99BCB15F954AF579(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_35(var uParam0)
{
	if (!func_26(uParam0))
	{
		func_33(uParam0);
	}
}

int func_36()
{
	struct<18> Var0;
	int iVar18;
	int iVar19;
	
	unk_0x310F6B4E168A8F5D(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0.f_0 = iLocal_124;
	Var0.f_1 = { Local_121 };
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4)
	{
		Var0.f_4[iVar18] = Local_329[iVar18 /*14*/];
		Var0.f_10[iVar18] = Local_329[iVar18 /*14*/].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_329.f_83;
	Var0.f_17 = Local_329.f_83.f_1;
	unk_0xD82614F454EB2C8B("SwitchSceneNeutral", 0, 1);
	unk_0x4EDE34FBADD967A6(400);
	iVar19 = unk_0xB8BA7F44DF1575E1(&Local_53, &Var0, 18, iLocal_97);
	unk_0x3F380364F30A5C6B(&Local_53);
	return iVar19;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return;
	}
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36673[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36647[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36647[iParam0 /*5*/].f_1 == unk_0x06736567F820A39E())
		{
			Global_36868 = 0;
		}
	}
	Global_36647[iParam0 /*5*/] = 13;
	Global_36647[iParam0 /*5*/].f_1 = 0;
	Global_36647[iParam0 /*5*/].f_2 = 0;
	Global_36647[iParam0 /*5*/].f_3 = 0;
	Global_36647[iParam0 /*5*/].f_4 = 0;
	Global_36646 = (Global_36646 - 1);
	if (Global_36646 < 0)
	{
		Global_36646 = 0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36647[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36754[iVar0 /*5*/] = iParam0;
	Global_36754[iVar0 /*5*/].f_1 = iParam1;
	Global_36754[iVar0 /*5*/].f_2 = iParam2;
	Global_36754[iVar0 /*5*/].f_3 = iParam3;
	Global_36754[iVar0 /*5*/].f_4 = iParam4;
}

int func_42()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36754[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36754[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36754[iVar0 /*5*/])
			{
				if (iParam1 == Global_36754[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
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
		if (!Global_36673[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36673[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_46()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x99BCB15F954AF579(&Global_2283, 25);
	unk_0xE27C8E42A97895CF(&Global_2284, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89121.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_49(0))
		{
			return 0;
		}
		Global_35706++;
		*iParam0 = Global_35706;
		unk_0xFEC8E17ADA862FEA(unk_0xBC628C78D8ECD5F1(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x0C174B9E4848D171(8);
		}
		Global_35742 = iParam2;
		Global_35704 = *iParam0;
		Global_35705 = iParam4;
		Global_35703 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35703 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35703)
			{
				if (Global_35709[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35704 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_134(iParam2))
		{
			return 0;
		}
		if (Global_35703 == 8)
		{
			return 0;
		}
		Global_35706++;
		*iParam0 = Global_35706;
		Global_35709[Global_35703 /*4*/] = Global_35706;
		Global_35709[Global_35703 /*4*/].f_1 = iParam1;
		Global_35709[Global_35703 /*4*/].f_2 = iParam2;
		Global_35709[Global_35703 /*4*/].f_3 = 0;
		Global_35703++;
		if (iParam4 != 0)
		{
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35703 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35703)
	{
		if (Global_35709[iVar0 /*4*/] == *uParam0)
		{
			Global_35709[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_49(int iParam0)
{
	if (Global_35742 == 15)
	{
		return 0;
	}
	if (func_134(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_121);
	if (fVar0 < 62500f)
	{
		func_74();
		func_71();
		if (iLocal_159)
		{
			if (fVar0 < 64f)
			{
				func_70();
				iLocal_159 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_160)
	{
		if (func_52())
		{
			iLocal_160 = 1;
			func_51();
		}
	}
}

void func_51()
{
	iLocal_48++;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!unk_0xC1EDB61CE0A4B94E(Local_329[iVar0 /*14*/]) || !unk_0xC1EDB61CE0A4B94E(Local_329[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xC1EDB61CE0A4B94E(Local_329.f_83) || !unk_0xC1EDB61CE0A4B94E(Local_329.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()
{
	switch (iLocal_124)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()
{
	int iVar0;
	char* sVar1;
	
	if (!func_26(&uLocal_147))
	{
		func_35(&uLocal_147);
		return;
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_157) && !unk_0xBDA1F5E8A36BFA07(iLocal_157, 0))
	{
		if (unk_0x5CB2DFF52F4D972D(iLocal_157))
		{
			return;
		}
	}
	if (func_23(&uLocal_147) >= 8f)
	{
		iVar0 = (unk_0xA6055C735E3DD877(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0xBDA1F5E8A36BFA07(Local_329[(iVar0 - 1) /*14*/], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_163, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&uLocal_147);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xC48487554D051523(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_68();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x97D4BC3047CEF5DE())
		{
			return 0;
		}
		if (func_90(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_67();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x99BCB15F954AF579(&Global_2283, 20);
			unk_0x99BCB15F954AF579(&Global_2284, 17);
			unk_0x99BCB15F954AF579(&Global_2285, 0);
			if (bParam2)
			{
				func_61();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (func_60())
				{
					return 0;
				}
				if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x5378344F881C2B51(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x206A3BB6682CBCBD(unk_0x06736567F820A39E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69521)
				{
					if (unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
					if (unk_0x973D428626B4A21D(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x4AEBCDB39031E1D4(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
				}
			}
			if (func_59())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
				{
					return 0;
				}
			}
			func_58();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_57();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_68();
	}
	return 0;
}

void func_57()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC48487554D051523(0);
	Global_15712 = 1;
}

void func_58()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x99BCB15F954AF579(&Global_2284, 16);
}

int func_59()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_60()
{
	int iVar0;
	int iVar1;
	
	if (Global_69521)
	{
		iVar0 = 0;
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar1, 1);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA0AA34E1398E91E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x8FE2FBDA23507F78(unk_0x06736567F820A39E(), 78, 1))
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

void func_61()
{
	if (func_110(14))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_62();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69521)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_62()
{
	func_63();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_63()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_66(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_65(unk_0x06736567F820A39E());
			if (func_64(iVar0) && (!func_110(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_64(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_64(int iParam0)
{
	return iParam0 < 3;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_66(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_66(int iParam0)
{
	if (func_64(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

void func_68()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if ((unk_0x1FB728BC68674B71() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_70()
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()) && !unk_0xBDA1F5E8A36BFA07(Local_329.f_83, 0))
	{
		iVar0 = unk_0xEC5C0F25A9A364A0();
		if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120)
		{
			iLocal_159 = 0;
			return;
		}
		unk_0x0FE275F91FA13532(Local_329.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_71()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0xEC5C0F25A9A364A0();
	if (iVar0 <= iLocal_119 && iVar0 >= iLocal_120)
	{
		iLocal_328 = 0;
		return;
	}
	if (!unk_0xBDA1F5E8A36BFA07(iLocal_157, 0) && !unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		switch (iLocal_328)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(iLocal_157, 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) < 64f && !unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
				{
					iLocal_161 = 0;
					iLocal_162 = 0;
					iLocal_328 = 1;
				}
				break;
			
			case 1:
				unk_0xD6763C9F81772BAE(&uVar1);
				unk_0x3195125C126B79C6(0, unk_0x06736567F820A39E(), -1, 0, 2);
				unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 0);
				unk_0x6F275D9063DAF754(uVar1);
				unk_0x457C4844450FF70E(iLocal_157, uVar1);
				unk_0xDD1A4EE55D86FE71(&uVar1);
				iLocal_328 = 2;
				break;
			
			case 2:
				if ((unk_0xFB900D9EE2ACC400(iLocal_157, 242628503) != 1 || unk_0xE722F1A5D8B43C06(iLocal_157, unk_0x06736567F820A39E(), 20f)) && !unk_0x97D4BC3047CEF5DE())
				{
					unk_0x608A9ECA218C4D24(iLocal_157, unk_0x06736567F820A39E(), -1);
					if (!iLocal_162)
					{
						func_72(iLocal_157, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_72(iLocal_157, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_328 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x5CB2DFF52F4D972D(iLocal_157))
				{
					func_33(&uLocal_144);
					unk_0x28B5966B12DC5B0F(iLocal_157, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_328 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(iLocal_157, 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) > 225f)
				{
					unk_0xD6763C9F81772BAE(&uVar2);
					unk_0x88D1C6255C7A4BE9(0, Local_329.f_83.f_9, 1000);
					unk_0x28B5966B12DC5B0F(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x6F275D9063DAF754(uVar2);
					unk_0x457C4844450FF70E(iLocal_157, uVar2);
					unk_0xDD1A4EE55D86FE71(&uVar2);
					iLocal_328 = 0;
				}
				if (func_26(&uLocal_144))
				{
					if (func_23(&uLocal_144) >= 5f && !iLocal_161)
					{
						iLocal_161 = 1;
						iLocal_328 = 1;
					}
					else if (func_23(&uLocal_144) >= 10f && !iLocal_162)
					{
						iLocal_162 = 1;
						iLocal_328 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_72(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x00BD2542D40FB0C9(iParam0, sParam1, sParam2, func_73(iParam3), 0);
}

int func_73(int iParam0)
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

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0xC1EDB61CE0A4B94E(Local_329[iVar2 /*14*/].f_1) && unk_0xC1EDB61CE0A4B94E(Local_329[iVar2 /*14*/]))
		{
			if (func_79(Local_329[iVar2 /*14*/], 1, 0, 0, 0) || unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), Local_329[iVar2 /*14*/].f_1, 1))
			{
				func_77();
				func_76(iLocal_105);
				unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
			}
			if (!unk_0xCFC04A38F256EE06(Local_329[iVar2 /*14*/]))
			{
				if (func_26(&(Local_125[iVar2 /*3*/])))
				{
					if (func_23(&(Local_125[iVar2 /*3*/])) > uLocal_150[iVar2])
					{
						if (unk_0x1B6292EA51632C25(Local_329[iVar2 /*14*/].f_1, 0) && unk_0x93E49C491856D7AD(Local_329[iVar2 /*14*/], Local_329[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = unk_0xA6055C735E3DD877(250, 500);
							iVar1 = unk_0xA6055C735E3DD877(250, 500);
							unk_0xD6763C9F81772BAE(&uVar3);
							unk_0x82E2E577EC002BA8(0, Local_329[iVar2 /*14*/].f_1, 1, iVar0);
							unk_0x82E2E577EC002BA8(0, Local_329[iVar2 /*14*/].f_1, 31, iVar1);
							unk_0x6F275D9063DAF754(uVar3);
							if (!unk_0xCFC04A38F256EE06(Local_329[iVar2 /*14*/]))
							{
								unk_0x457C4844450FF70E(Local_329[iVar2 /*14*/], uVar3);
							}
							unk_0xDD1A4EE55D86FE71(&uVar3);
						}
						func_33(&(Local_125[iVar2 /*3*/]));
						uLocal_150[iVar2] = unk_0x83D8CBE6E641FA2A(0f, 3f);
					}
				}
				else
				{
					func_35(&(Local_125[iVar2 /*3*/]));
				}
			}
			if (!unk_0xBDA1F5E8A36BFA07(Local_329[iVar2 /*14*/], 0))
			{
				if ((unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), Local_329[iVar2 /*14*/]) && !unk_0x9C4162CAC2B459EC(Local_329[iVar2 /*14*/])) && !unk_0x1514DF028FBE7449(Local_329[iVar2 /*14*/]))
				{
					Local_329[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_11)
				{
					unk_0xD6763C9F81772BAE(&uVar3);
					unk_0x88D1C6255C7A4BE9(0, Local_329[iVar2 /*14*/].f_9, 1000);
					unk_0x28B5966B12DC5B0F(0, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x6F275D9063DAF754(uVar3);
					unk_0x457C4844450FF70E(Local_329[iVar2 /*14*/], uVar3);
					unk_0xDD1A4EE55D86FE71(&uVar3);
					Local_329[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0x9C4162CAC2B459EC(Local_329[iVar2 /*14*/]) || unk_0x1514DF028FBE7449(Local_329[iVar2 /*14*/]))
				{
					if (!Local_329[iVar2 /*14*/].f_10 && (unk_0x9C4162CAC2B459EC(Local_329[iVar2 /*14*/]) || unk_0x1514DF028FBE7449(Local_329[iVar2 /*14*/])))
					{
						Local_329.f_101++;
					}
					Local_329[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_329[iVar2 /*14*/].f_10)
				{
					unk_0xD6763C9F81772BAE(&uVar3);
					unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 1000);
					unk_0x28B5966B12DC5B0F(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x88D1C6255C7A4BE9(0, Local_329[iVar2 /*14*/].f_9, 1000);
					unk_0x28B5966B12DC5B0F(0, Local_329[iVar2 /*14*/].f_12, Local_329[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x6F275D9063DAF754(uVar3);
					unk_0x457C4844450FF70E(Local_329[iVar2 /*14*/], uVar3);
					unk_0xDD1A4EE55D86FE71(&uVar3);
					Local_329[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0xC1EDB61CE0A4B94E(Local_329.f_83.f_1) && unk_0xC1EDB61CE0A4B94E(Local_329.f_83))
	{
		if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), Local_329.f_83.f_1, 0))
		{
			iLocal_86 = Local_329.f_83.f_1;
		}
		if (func_79(Local_329.f_83, 1, 0, 0, 0))
		{
			func_77();
			func_76(iLocal_105);
			unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
		}
		if (!unk_0xCFC04A38F256EE06(Local_329.f_83))
		{
			if (func_26(&uLocal_141))
			{
				if (func_23(&uLocal_141) > fLocal_156)
				{
					if (unk_0x1B6292EA51632C25(Local_329.f_83.f_1, 0) && unk_0x93E49C491856D7AD(Local_329.f_83, Local_329.f_83.f_1, 0))
					{
						iVar0 = unk_0xA6055C735E3DD877(250, 500);
						iVar1 = unk_0xA6055C735E3DD877(250, 500);
						unk_0xD6763C9F81772BAE(&uVar3);
						unk_0x82E2E577EC002BA8(0, Local_329.f_83.f_1, 1, iVar0);
						unk_0x82E2E577EC002BA8(0, Local_329.f_83.f_1, 31, iVar1);
						unk_0x6F275D9063DAF754(uVar3);
						if (!unk_0xCFC04A38F256EE06(Local_329.f_83))
						{
							unk_0x457C4844450FF70E(Local_329.f_83, uVar3);
						}
						unk_0xDD1A4EE55D86FE71(&uVar3);
					}
					func_33(&uLocal_141);
					fLocal_156 = unk_0x83D8CBE6E641FA2A(0f, 3f);
				}
			}
			else
			{
				func_35(&uLocal_141);
			}
		}
		if (!unk_0xBDA1F5E8A36BFA07(Local_329.f_83, 0))
		{
			if ((unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), Local_329.f_83) && !unk_0x9C4162CAC2B459EC(Local_329.f_83)) && !unk_0x1514DF028FBE7449(Local_329.f_83))
			{
				Local_329.f_83.f_11 = 1;
			}
			else if (Local_329.f_83.f_11)
			{
				unk_0xD6763C9F81772BAE(&uVar3);
				unk_0x88D1C6255C7A4BE9(0, Local_329.f_83.f_9, 1000);
				unk_0x28B5966B12DC5B0F(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x6F275D9063DAF754(uVar3);
				unk_0x457C4844450FF70E(Local_329.f_83, uVar3);
				unk_0xDD1A4EE55D86FE71(&uVar3);
				Local_329.f_83.f_11 = 0;
			}
			if (unk_0x9C4162CAC2B459EC(Local_329.f_83) || unk_0x1514DF028FBE7449(Local_329.f_83))
			{
				if (!Local_329.f_83.f_10)
				{
					Local_329.f_101++;
				}
				Local_329.f_83.f_10 = 1;
			}
			else if (Local_329.f_83.f_10)
			{
				unk_0xD6763C9F81772BAE(&uVar3);
				unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), 1000);
				unk_0x28B5966B12DC5B0F(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x88D1C6255C7A4BE9(0, Local_329.f_83.f_9, 1000);
				unk_0x28B5966B12DC5B0F(0, Local_329.f_83.f_12, Local_329.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x6F275D9063DAF754(uVar3);
				unk_0x457C4844450FF70E(Local_329.f_83, uVar3);
				unk_0xDD1A4EE55D86FE71(&uVar3);
				iLocal_328 = 4;
				func_33(&uLocal_144);
				Local_329.f_83.f_10 = 0;
			}
		}
	}
}

char* func_75()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0xA6055C735E3DD877(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_76(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_130(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_84(&iLocal_96);
		iLocal_95 = 9;
	}
}

void func_77()
{
	int iVar0[10];
	var uVar11;
	int iVar12;
	
	unk_0x8DB7EA2D75DA4B59(unk_0x06736567F820A39E(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (unk_0xC1EDB61CE0A4B94E(iVar0[iVar12]) && !unk_0xCFC04A38F256EE06(iVar0[iVar12]))
		{
			if (unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 4))
			{
				unk_0xFEDD46326A41DB46(iVar0[iVar12], unk_0x06736567F820A39E(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0xD6763C9F81772BAE(&uVar11);
				unk_0x608A9ECA218C4D24(0, unk_0x06736567F820A39E(), unk_0xA6055C735E3DD877(300, 900));
				unk_0xFB9941AAF643A23C(0, unk_0x06736567F820A39E(), 0, 0);
				unk_0x6F275D9063DAF754(uVar11);
				unk_0x457C4844450FF70E(iVar0[iVar12], uVar11);
				unk_0xDD1A4EE55D86FE71(&uVar11);
			}
		}
		iVar12++;
	}
	switch (Global_101186.f_17782.f_1)
	{
		case 0:
			func_78(0);
			break;
		
		case 1:
			func_78(0);
			break;
		
		case 3:
			func_78(0);
			break;
		
		case 4:
			func_78(0);
			break;
		
		case 5:
			func_78(0);
			break;
		
		case 2:
			func_78(0);
			break;
	}
}

void func_78(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0x06736567F820A39E();
	if (Local_329.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			Var1 = { unk_0xF4745590D18D14B8(iParam0, 1) };
			if (bParam1)
			{
				if (unk_0x1D58D319587D567F(iParam0, unk_0x06736567F820A39E(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0x7C6333A22EDB4BF7(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x0280B42925DCFDEC(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), iParam0) || unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iParam0))
				{
					if (func_80(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x0FDFEC0DD29106EE(iParam0, 0))
			{
				if (unk_0x1D58D319587D567F(unk_0x34E1EF1E8BCD1BFC(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0x0DA2000F5C8A8ECC(iParam0))
			{
				return 1;
			}
			if (unk_0x09AED05FAA64E81C(iVar0, 4))
			{
				if (unk_0x98D424FE7497139D(iVar0))
				{
					if (unk_0x8853522CEFF93BE9(iParam0, unk_0xF4745590D18D14B8(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0xDECA6CE314913AC1(Var1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x8CE40F22CEFDEA99((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (unk_0x681E099FF604FDCE(iParam0))
			{
				if (unk_0xABEE166840E303E7(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0x3A55B6AA596FF586(-1, Var1, 25f) && !unk_0x3A55B6AA596FF586(11, Var1, 25f)) && !unk_0x3A55B6AA596FF586(13, Var1, 25f))
			{
				return 1;
			}
			unk_0xFE26A2643AFB7A3B(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_80(var uParam0, int iParam1)
{
	return func_81(unk_0x44A9253132E1DDE0(unk_0xBC628C78D8ECD5F1()), uParam0, iParam1);
}

var func_81(int iParam0, int iParam1, var uParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	if (!unk_0xBDA1F5E8A36BFA07(uParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(iParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, uParam2);
}

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x7868479D9B6694C0(unk_0xBC628C78D8ECD5F1()))
	{
		return 0;
	}
	if (func_89(0))
	{
		return 0;
	}
	if (unk_0xEE448F70B7098781())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/] == 1 && Global_36442[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36442[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36442[iVar0 /*32*/].f_5 = 1;
			Global_36442[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36442[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36442[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_84(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_83(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/])
		{
			Global_36442[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_85(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x98934607F8D0FB03(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xAD79840A082ADD7F())
	{
		if (!*iParam0 == -1)
		{
			func_84(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36442[iVar0 /*32*/])
		{
			Global_36442[iVar0 /*32*/] = 1;
			Global_36442[iVar0 /*32*/].f_1 = Global_36643;
			Global_36643++;
			Global_36442[iVar0 /*32*/].f_4 = 0;
			Global_36442[iVar0 /*32*/].f_29 = 0;
			Global_36442[iVar0 /*32*/].f_5 = 0;
			Global_36442[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36442[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36442[iVar0 /*32*/].f_6 = iParam3;
			Global_36442[iVar0 /*32*/].f_31 = unk_0xAE832DCCE9CD3242();
			Global_36442[iVar0 /*32*/].f_7 = 0;
			Global_36442[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x226FA58470A21AEF(sParam4))
			{
				Global_36442[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36442[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36442[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36442[iVar0 /*32*/].f_12 = 0;
				Global_36442[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36442[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_86(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam0) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_87(char* sParam0, int iParam1, int iParam2)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0xD92C45283BCDA624(iParam1);
	unk_0xD92C45283BCDA624(iParam2);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, -1);
}

var func_88()
{
	return Global_68089;
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

bool func_91()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

int func_92()
{
	if (unk_0x98934607F8D0FB03(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_94()
{
	return 1;
}

void func_95(var uParam0, int iParam1)
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_97()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		return ((((bVar1 && unk_0xE9F7E89BC2352535(0, 69)) || (bVar1 && unk_0xE9F7E89BC2352535(0, 70))) || (bVar1 && unk_0xE9F7E89BC2352535(0, 68))) || unk_0x8E078D197865EF83(unk_0xE0BDAFA1A39552D6()));
	}
	return (((((bVar1 && unk_0xE9F7E89BC2352535(0, 24)) || (bVar1 && unk_0xE9F7E89BC2352535(0, 25))) || (bVar1 && unk_0xE9F7E89BC2352535(0, 47))) || unk_0x71D4779BE8EB3270(unk_0x06736567F820A39E())) || unk_0x8E078D197865EF83(unk_0xE0BDAFA1A39552D6()));
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				iVar0 = func_62();
				if (!func_64(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_105()) || Global_100233) || Global_25154) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1) || func_105()) || Global_25154) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_105()) || Global_100233) || Global_25154) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_101186.f_6454.f_919[iVar0] == 5) || Global_36289 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_105()) || Global_100233) || Global_25154) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
						{
							return 0;
						}
						if ((unk_0xAD79840A082ADD7F() && unk_0xCB6A4452D5152B74() != 3) && unk_0xA4D01763320ADBAE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
						{
							if ((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_105()) || Global_25154) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_101186.f_6454.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || func_105()) || func_102()) || Global_100233) || Global_25154) || func_104()) || Global_36870) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0)) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1)) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x8B69AEF6B3EE75BF(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_105()) || Global_100233) || Global_25154) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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

var func_99()
{
	return Global_91349.f_1;
}

int func_100()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 13);
	}
	return 0;
}

int func_101()
{
	if (Global_69781)
	{
		return 1;
	}
	else if (Global_55774 && !Global_55780)
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return Global_91362.f_297 > 0;
}

bool func_103()
{
	return Global_91362.f_296 > 0;
}

var func_104()
{
	return Global_1315913;
}

int func_105()
{
	if (!unk_0x17CC0D5008835470())
	{
		return Global_89121.f_44 == 1;
	}
	return 0;
}

int func_106()
{
	if (unk_0x98934607F8D0FB03(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()
{
	return Global_87475;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_110(6) || func_110(7))
			{
				return 1;
			}
			else
			{
				return func_108(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_134(5))
			{
				if (func_98(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xCDB4C4200A9B478A(Global_25464[iVar0 /*23*/].f_19);
}

bool func_110(int iParam0)
{
	return Global_35742 == iParam0;
}

void func_111()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xEC5C0F25A9A364A0();
	if ((iVar0 <= iLocal_119 && iVar0 >= iLocal_120) || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) != 0)
	{
		return;
	}
	if (bLocal_158)
	{
		func_121();
		func_120();
		switch (iLocal_124)
		{
			case 0:
				func_119(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_119(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_119(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_119(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_119(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_118(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_119(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_119(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_119(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_119(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_118(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_119(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_119(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_119(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_119(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_119(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_118(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_119(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_119(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_119(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_119(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_118(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_119(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_119(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_119(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_119(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_119(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_118(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_119(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_119(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_119(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_119(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_119(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_118(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_124)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0x226FA58470A21AEF(sVar1))
		{
			if (unk_0x35BEE533650C4BBF(sVar1))
			{
				if (!unk_0xA472659498B908A8(sVar1))
				{
					unk_0x9ECF8C009A69E945(sVar1, 1);
				}
			}
		}
	}
	func_112();
}

void func_112()
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_110 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_329.f_0)
		{
			if (!func_117(Local_329[iVar5 /*14*/].f_2))
			{
				Local_329[iVar5 /*14*/].f_1 = unk_0x75409DE1FC985A9D(func_116(0), Local_329[iVar5 /*14*/].f_2, Local_329[iVar5 /*14*/].f_5, 1, 1);
				unk_0xCE889B96E78E6DC5(Local_329[iVar5 /*14*/].f_1);
				unk_0x590C7568C3E71544(Local_329[iVar5 /*14*/].f_1, 1);
				if (func_117(Local_329[iVar5 /*14*/].f_6))
				{
					Local_329[iVar5 /*14*/] = unk_0x064835636E49C34D(Local_329[iVar5 /*14*/].f_1, 4, func_115(), -1, 1, 1);
					unk_0x68018E1A807B2CF1(Local_329[iVar5 /*14*/].f_1, 1, 0, 0);
				}
				else
				{
					Local_329[iVar5 /*14*/] = unk_0xB500796AAD639F82(4, func_115(), Local_329[iVar5 /*14*/].f_6, Local_329[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_329[iVar5 /*14*/].f_12 = sVar3;
					Local_329[iVar5 /*14*/].f_13 = sVar4;
					unk_0xD6763C9F81772BAE(&uVar0);
					unk_0x33E1C998A7239394(0, unk_0xA6055C735E3DD877(100, 500));
					unk_0x28B5966B12DC5B0F(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0x83D8CBE6E641FA2A(0, 1065353216), 0, 0, 0);
					unk_0x6F275D9063DAF754(uVar0);
					unk_0x457C4844450FF70E(Local_329[iVar5 /*14*/], uVar0);
					unk_0xDD1A4EE55D86FE71(&uVar0);
				}
				unk_0x711BF7DCF9AE7AC2(Local_329[iVar5 /*14*/], 1);
				unk_0x51E836FC5F2DD246(Local_329[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_329.f_83.f_1 = unk_0x75409DE1FC985A9D(func_116(1), Local_329.f_83.f_2, Local_329.f_83.f_5, 1, 1);
		unk_0xCE889B96E78E6DC5(Local_329.f_83.f_1);
		unk_0x590C7568C3E71544(Local_329.f_83.f_1, 1);
		if (func_117(Local_329.f_83.f_6))
		{
			Local_329.f_83 = unk_0x064835636E49C34D(Local_329.f_83.f_1, 4, func_115(), -1, 1, 1);
			unk_0x68018E1A807B2CF1(Local_329.f_83.f_1, 1, 0, 0);
		}
		else
		{
			Local_329.f_83 = unk_0xB500796AAD639F82(4, func_115(), Local_329.f_83.f_6, Local_329.f_83.f_9, 1, 1);
			iVar1 = (unk_0xA6055C735E3DD877(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_329.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_329.f_83.f_13 = sVar4;
			unk_0xD6763C9F81772BAE(&uVar0);
			unk_0x5ADB1DCCE9B5E895(0, func_114((unk_0xA6055C735E3DD877(0, 65535) % 1000), 1, 1000));
			unk_0x28B5966B12DC5B0F(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0x83D8CBE6E641FA2A(0, 1065353216), 0, 0, 0);
			unk_0x6F275D9063DAF754(uVar0);
			unk_0x457C4844450FF70E(Local_329.f_83, uVar0);
			unk_0xDD1A4EE55D86FE71(&uVar0);
		}
	}
	else if (fLocal_110 < 225f)
	{
	}
	iLocal_157 = Local_329.f_83;
	if (!unk_0xBDA1F5E8A36BFA07(Local_329[0 /*14*/], 0))
	{
		func_113(&uLocal_163, 1, Local_329[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0xBDA1F5E8A36BFA07(Local_329[1 /*14*/], 0))
	{
		func_113(&uLocal_163, 2, Local_329[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0xBDA1F5E8A36BFA07(Local_329[2 /*14*/], 0))
	{
		func_113(&uLocal_163, 3, Local_329[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&uLocal_147))
	{
		func_35(&uLocal_147);
	}
	else
	{
		func_33(&uLocal_147);
	}
}

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(iParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(iParam2, 1);
			}
		}
	}
}

int func_114(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_115()
{
	return joaat("a_m_y_motox_01");
}

int func_116(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_329.f_71)
	{
		if (unk_0xE3A53753E220C79D(Local_329.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_124 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0xA6055C735E3DD877(0, iVar0);
	if (Local_329.f_71[iVar0] == 0)
	{
		if (Local_329.f_71[0] == 0)
		{
			switch (iLocal_124)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_329.f_71[0];
		}
	}
	return Local_329.f_71[iVar0];
}

int func_117(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_118(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	if (func_117(Local_329.f_83.f_2))
	{
		Local_329.f_83.f_2 = { Param0 };
		Local_329.f_83.f_5 = fParam3;
		Local_329.f_83.f_6 = { Param4 };
		Local_329.f_83.f_9 = fParam7;
	}
}

void func_119(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_329.f_0)
	{
		if (!bVar1 && func_117(Local_329[iVar0 /*14*/].f_2))
		{
			Local_329[iVar0 /*14*/].f_2 = { Param0 };
			Local_329[iVar0 /*14*/].f_5 = fParam3;
			Local_329[iVar0 /*14*/].f_6 = { Param4 };
			Local_329[iVar0 /*14*/].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_120()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_329.f_0)
	{
		Local_329[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_329[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_329.f_83.f_2 = { 0f, 0f, 0f };
	Local_329.f_83.f_5 = 0f;
}

void func_121()
{
	switch (iLocal_124)
	{
		case 0:
			unk_0x973B08346B11E10C(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, 0, 1);
			unk_0x6C4DEE9BDB093DC6(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0);
			unk_0x7977497872120078("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0x973B08346B11E10C(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			unk_0x7977497872120078("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x973B08346B11E10C(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
			unk_0x18FA64B82A64141F(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0);
			unk_0x973B08346B11E10C(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, 0, 1);
			unk_0x7977497872120078("WORLD_HUMAN_HIKER", 0);
			unk_0x7977497872120078("WORLD_VEHICLE_EMPTY", 0);
			unk_0x7977497872120078("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0x7977497872120078("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x7977497872120078("WORLD_VEHICLE_EMPTY", 1);
			unk_0x7977497872120078("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0x7977497872120078("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0x973B08346B11E10C(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, 0, 1);
			unk_0x18FA64B82A64141F(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0x9ECF8C009A69E945("QUARRY", 0);
			unk_0x973B08346B11E10C(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 1);
			unk_0x18FA64B82A64141F(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0);
			break;
	}
}

var func_122()
{
	return ((((((((func_123(&(Local_329.f_71)) && func_123(&(Local_329.f_77))) && func_123(&(Local_329.f_99))) && unk_0x7B43775D6E0D7325("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0x7B43775D6E0D7325("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0x7B43775D6E0D7325("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0x7B43775D6E0D7325("amb@world_human_aa_smoke@male@idle_a")) && unk_0x7B43775D6E0D7325("random@street_race")) && unk_0x7B43775D6E0D7325("gestures@m@standing@casual"));
}

int func_123(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x5C9FE32E2FF37989((*uParam0)[iVar0]))
			{
				if (!unk_0x5C9FE32E2FF37989((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_124()
{
	char cVar0[64];
	
	func_126(&(Local_329.f_77), joaat("a_m_y_motox_01"));
	func_126(&(Local_329.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_124)
	{
		case 0:
			func_126(&(Local_329.f_71), joaat("sanchez"));
			func_126(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_126(&(Local_329.f_71), joaat("mesa"));
			func_126(&(Local_329.f_71), joaat("bjxl"));
			func_126(&(Local_329.f_71), joaat("patriot"));
			func_126(&(Local_329.f_71), joaat("dubsta2"));
			func_126(&(Local_329.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_126(&(Local_329.f_71), joaat("sanchez"));
			func_126(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_126(&(Local_329.f_71), joaat("sanchez"));
			func_126(&(Local_329.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_126(&(Local_329.f_71), joaat("mesa"));
			func_126(&(Local_329.f_71), joaat("bfinjection"));
			func_126(&(Local_329.f_71), joaat("bjxl"));
			func_126(&(Local_329.f_71), joaat("sadler"));
			func_126(&(Local_329.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_126(&(Local_329.f_71), joaat("sanchez"));
			func_126(&(Local_329.f_71), joaat("blazer"));
			break;
	}
	unk_0x198E497B820DA913("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x198E497B820DA913("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x198E497B820DA913("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x198E497B820DA913("amb@world_human_aa_smoke@male@idle_a");
	unk_0x198E497B820DA913("random@street_race");
	unk_0x198E497B820DA913("gestures@m@standing@casual");
	if (iLocal_124 == 0)
	{
		unk_0xBECC89ACB4E5D4ED(joaat("prop_fncwood_14c"));
		unk_0xBECC89ACB4E5D4ED(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_124)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0x59D46EE810784603(1, &cVar0);
	func_125(&(Local_329.f_77));
	func_125(&(Local_329.f_71));
	func_125(&(Local_329.f_99));
}

void func_125(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xBECC89ACB4E5D4ED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_126(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_127(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_127(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_128(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_129(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_130(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 0))
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 18);
		if (Global_25461 == 1)
		{
			Global_25462 = 1;
		}
		Global_25461 = 1;
	}
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 0);
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 15);
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 0);
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCDB4C4200A9B478A(Global_25464[iVar0 /*23*/].f_19))
		{
			unk_0x1FA4101587A541CE(1);
			unk_0x2239ED27B231AE2E(&(Global_25464[iVar0 /*23*/].f_19));
			unk_0x1FA4101587A541CE(0);
		}
	}
}

int func_131()
{
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x02DE5BF2453C475D() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x7DA173D4FD42F36B(Global_101186.f_7851.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_134(int iParam0)
{
	return func_135(iParam0, Global_35742);
}

int func_135(int iParam0, int iParam1)
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

bool func_136(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_137()
{
	StringCopy(&Local_53, "Offroad_Races", 64);
	unk_0xAD6C1412D05CFBD7(1);
	fLocal_117 = (6f + 4f);
	iLocal_99 = 4;
	func_95(&uLocal_94, 4194304);
	iLocal_97 = 18500;
	iLocal_86 = 0;
	iLocal_119 = 0;
	iLocal_120 = 25;
	iLocal_103 = 0;
	iLocal_124 = func_141(Local_90, &Local_121);
	iLocal_105 = func_140(iLocal_124);
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_139(iLocal_105)) + 5f);
	if (func_133(0, iLocal_99))
	{
		bLocal_158 = true;
	}
	else
	{
		func_76(iLocal_105);
		bLocal_158 = false;
	}
	if (iLocal_124 > Global_101186.f_17782.f_1)
	{
		if (func_109(func_140(iLocal_124)))
		{
		}
		iLocal_105 = 263;
		func_76(iLocal_105);
	}
	if (!func_109(func_140(iLocal_124)) && unk_0xDF916BCF4D39E8C2())
	{
		if (iLocal_105 != 263)
		{
			if (func_138(iLocal_105, 1))
			{
				iLocal_105 = 263;
			}
		}
		func_76(iLocal_105);
	}
	if (iLocal_124 == 2)
	{
		iLocal_119 = 20;
		iLocal_120 = 3;
	}
	if (iLocal_124 == 1 || iLocal_124 == 5)
	{
		sLocal_101 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_101 = "PLAY_OFFROAD_M";
	}
}

bool func_138(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 15);
	}
	return unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 0);
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_141(struct<3> Param0, var uParam3)
{
	int iVar0;
	struct<3> Var1[7];
	float fVar23;
	int iVar24;
	float fVar25;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_142(0) };
	Var1[1 /*3*/] = { func_142(1) };
	Var1[3 /*3*/] = { func_142(3) };
	Var1[4 /*3*/] = { func_142(4) };
	Var1[5 /*3*/] = { func_142(5) };
	Var1[2 /*3*/] = { func_142(2) };
	Var1[6 /*3*/] = { func_142(6) };
	fVar23 = unk_0xB7A628320EFF8E47(Param0, Var1[0 /*3*/]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= (7 - 1))
	{
		fVar25 = unk_0xB7A628320EFF8E47(Param0, Var1[iVar24 /*3*/]);
		if (fVar25 < fVar23)
		{
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_142(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_143(var uParam0, int iParam1)
{
	func_144(uParam0, iParam1);
}

void func_144(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_145(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_130(iLocal_105, 0, 0);
		}
	}
	func_84(&iLocal_96);
	if (func_136(uLocal_94, 2))
	{
		func_5();
		func_143(&uLocal_94, 2);
		func_20(&iLocal_98);
	}
	iLocal_98 = -1;
	func_146();
	unk_0xF5DF8F3392CDD07B();
}

void func_146()
{
	func_143(&uLocal_94, 4);
	func_147();
	if (unk_0xDF49ABF9204CC801(uLocal_52))
	{
		unk_0xDDD33E8890DE678F(uLocal_52, 3);
	}
	if (!unk_0x60D87DA27F70EBBC(&Local_69))
	{
		if (unk_0x1AF431622CC415A8(&Local_69) != 0)
		{
			unk_0x3F380364F30A5C6B(&Local_69);
		}
	}
}

void func_147()
{
}

