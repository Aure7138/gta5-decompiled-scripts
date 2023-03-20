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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	var uLocal_117 = 1;
	var uLocal_118 = 0;
	var uLocal_119 = 1;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	struct<3> Local_122 = { 0, 0, 0 } ;
	var uLocal_125 = 0;
	var uLocal_126 = 16;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
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
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
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
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	Local_44 = { 500f, 500f, 500f };
	iLocal_95 = -1;
	iLocal_96 = 2050;
	iLocal_97 = -1;
	iLocal_98 = -1;
	sLocal_100 = "CC_SUBSTR";
	fLocal_101 = 125f;
	iLocal_102 = 1;
	iLocal_104 = 262;
	fLocal_116 = 4f;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	uLocal_85 = uLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (unk_0xD63E63DFACCEB80E(114))
	{
		func_137(1);
	}
	uLocal_84 = unk_0x4E6043D225B9C75F(unk_0xCFC72E446B0B3AD7());
	iLocal_94 = 0;
	func_135(&Global_96012, 0);
	func_129();
	unk_0xAD9720A9EDE1F633(1);
	if (func_128(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_30778)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_128(uLocal_93, 8))
	{
		if (!func_126(iLocal_99))
		{
			if (func_125(0, iLocal_98))
			{
				func_137(0);
			}
			else
			{
				func_137(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!func_125(0, iLocal_98))
		{
			func_137(1);
		}
	}
	if (func_128(uLocal_93, 8388608))
	{
		func_137(1);
	}
	if (func_128(uLocal_93, 524288) && (func_124() && !func_123()))
	{
		func_137(1);
	}
	if (unk_0x7B47A371E2D93C2C(unk_0x63D5B7FC98AAD9B7()) > 1 && !func_128(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			func_122(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_121(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_137(1);
		}
		uLocal_84 = unk_0x4E6043D225B9C75F(unk_0xCFC72E446B0B3AD7());
		if (func_128(uLocal_93, 1048576))
		{
			if (unk_0x0BA451447C3B1A8D(uLocal_84))
			{
				func_137(1);
			}
		}
		if (unk_0x746960881FB19A89(iLocal_84) && !unk_0x0BA451447C3B1A8D(iLocal_84))
		{
			Local_86 = { unk_0x77009B1C011405A9(iLocal_84, 1) };
			fLocal_92 = unk_0xB7A628320EFF8E47(Local_86, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_92 = fLocal_92;
			Local_110 = { Local_86 };
			Local_113 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_110.f_2 = 0f;
			Local_113.f_2 = 0f;
			fLocal_109 = unk_0xB7A628320EFF8E47(Local_110, Local_113);
			switch (iLocal_94)
			{
				case 0:
					if (func_126(iLocal_99) || (func_128(uLocal_93, 16) && !func_128(uLocal_93, 524288)))
					{
						iLocal_97 = -1;
						func_117();
						func_121(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 262)
							{
								func_122(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
							func_121(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_115())
					{
						iLocal_102 = iLocal_102;
						func_121(3);
					}
					else
					{
						func_117();
					}
					break;
				
				case 3:
					if (unk_0xB659F73755907B0D())
					{
						func_137(1);
						return;
					}
					if (!func_126(iLocal_99))
					{
						if (!func_128(uLocal_93, 8))
						{
							bVar1 = true;
							if (unk_0x6B08EC9A88700FBB(&(Global_89962.f_3), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_137(0);
								break;
							}
						}
					}
					if (!func_128(uLocal_93, 4))
					{
						func_112();
						func_111(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_89996)
					{
						if (iLocal_104 != 262)
						{
							if (func_110(6) && !func_109(iLocal_104))
							{
							}
							else
							{
								func_122(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
						}
						func_121(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar2 = !func_128(uLocal_93, 64);
						func_135(&uLocal_93, 128);
						if (!func_108(3) && !Global_89996)
						{
							if (func_128(uLocal_93, 2097152))
							{
								if ((!func_128(uLocal_93, 1) || !unk_0x746960881FB19A89(func_107())) && !Global_89996)
								{
									func_121(10);
									break;
								}
							}
						}
						if (func_128(uLocal_93, 524288) && (func_124() && !func_123()))
						{
							func_137(1);
						}
						if (func_106())
						{
							func_137(1);
						}
						if ((!func_98(6) || Global_96405) || func_97())
						{
							bVar2 = false;
						}
						if (func_128(uLocal_93, 1))
						{
							if (!func_96())
							{
								func_94(&uLocal_93, 128);
								bVar2 = false;
							}
						}
						if (func_93(1))
						{
							bVar2 = false;
						}
						if (Global_68245)
						{
							bVar2 = false;
						}
						if (func_92())
						{
							bVar2 = false;
						}
						if (unk_0x2D8FCFBC4E01FF7C())
						{
							bVar2 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0x2439A8FCC113E966(unk_0xCFC72E446B0B3AD7()))
						{
							bVar2 = false;
						}
						if (!unk_0x1507DA9B20D3151C(unk_0xCFC72E446B0B3AD7()))
						{
							bVar2 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x41EEB10CCC2497A8(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar2 = false;
							}
							if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x303F3ACCD1D0223D(0, 51);
								if (func_87(uLocal_85))
								{
									if (iLocal_95 == -1)
									{
										func_86(&iLocal_95, 4, sLocal_100, 0, 0);
										func_94(&uLocal_93, 2048);
									}
									else if (!func_128(uLocal_93, 2048) || !unk_0xC9EED58014EF1F40())
									{
										func_85(&iLocal_95);
										func_135(&uLocal_93, 2048);
									}
									if (func_83(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										func_85(&iLocal_95);
										func_135(&uLocal_93, 2048);
										unk_0x9AD29F8AF48B9AD1(&Local_68);
										unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 56);
										func_121(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									func_85(&iLocal_95);
									func_135(&uLocal_93, 2048);
									unk_0x9AD29F8AF48B9AD1(&Local_68);
									unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 56);
									func_121(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_95 != -1)
							{
								func_85(&iLocal_95);
								func_135(&uLocal_93, 2048);
								unk_0x35611EEE7A1FFEDB(0);
							}
						}
					}
					func_80();
					break;
				
				case 5:
					unk_0x303F3ACCD1D0223D(0, 51);
					if (unk_0x197501C41CB2403F(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							func_85(&iLocal_95);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_128(uLocal_93, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_77(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
							{
								unk_0x6D32A18F1C515812(unk_0xCFC72E446B0B3AD7());
							}
							func_76();
							if (Global_35957)
							{
								func_67(unk_0x9F92518438215DD0());
							}
							unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 56);
							uLocal_51 = func_24();
							func_94(&uLocal_93, 2);
							func_121(6);
							func_20(&uLocal_106);
							if (iLocal_98 != -1)
							{
								func_19(iLocal_98);
								func_16(func_18(iLocal_98), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_121(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_128(Global_96012, 262144))
					{
						func_135(&Global_96012, 262144);
						func_14();
					}
					if (func_128(uLocal_93, 2097152))
					{
						if (!func_108(3) && !unk_0x4E8A0A2FF31F0831(uLocal_51))
						{
							func_121(10);
						}
					}
					if (!unk_0x4E8A0A2FF31F0831(uLocal_51))
					{
						unk_0x29CC051C2B7F7BBB(unk_0xF2DB717A73826179((func_10(&uLocal_106) * 1000f)), iLocal_98, 0);
						func_9(&uLocal_106);
						func_135(&uLocal_93, 256);
						func_8();
						if (bVar0)
						{
							func_135(&uLocal_93, 2);
						}
						else if (func_128(uLocal_93, 2))
						{
							if (func_128(Global_96012, 0))
							{
								func_7(&iLocal_97);
								iLocal_97 = -1;
								func_135(&uLocal_93, 2);
							}
							else
							{
								func_7(&iLocal_97);
								iLocal_97 = -1;
								func_135(&uLocal_93, 2);
							}
						}
						func_121(0);
						if (iLocal_98 != -1)
						{
							if (func_128(Global_96012, 0))
							{
								unk_0x20C7E57166B3A302(func_18(iLocal_98), 0, Global_89999, 0);
								func_6(func_18(iLocal_98), 0, Global_89999, 1, 0);
							}
							else
							{
								unk_0x20C7E57166B3A302(func_18(iLocal_98), 0, Global_89999, 0);
								func_6(func_18(iLocal_98), 0, Global_89999, 0, 0);
							}
						}
						func_5();
						func_135(&Global_96012, 0);
						if (func_128(uLocal_93, 16777216))
						{
							func_137(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_97358.f_7341)
							{
								if (!func_125(0, iLocal_98))
								{
									func_137(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_121(0);
					break;
				
				case 10:
					func_137(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							func_122(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_121(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 262)
					{
						func_122(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						func_85(&iLocal_95);
					}
					if (!unk_0x9E9AFDBF482248F6(sLocal_100))
					{
						if (func_1(sLocal_100))
						{
							unk_0x35611EEE7A1FFEDB(1);
						}
					}
					func_121(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (func_126(iLocal_99) && func_125(0, iLocal_98))
									{
										func_129();
										if (iLocal_104 != 262)
										{
											func_122(iLocal_104, 1, 0);
										}
										func_121(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 262)
									{
										func_122(iLocal_104, 1, 0);
										iLocal_104 = 262;
									}
									func_121(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_129();
									if (iLocal_104 != 262)
									{
										func_122(iLocal_104, 1, 0);
									}
									func_121(0);
								}
							}
						}
						else
						{
							func_122(iLocal_104, 1, 0);
						}
					}
					else
					{
						iLocal_103++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_2()
{
	func_3(&uLocal_117);
	func_3(&uLocal_119);
	unk_0xE29F0AC6C728DD9C("pickup_object");
	unk_0xE29F0AC6C728DD9C("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x0880E86251A44B7F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x9E9AFDBF482248F6(&Global_87437))
	{
		return;
	}
	if (unk_0x28C1602D90225EB3(sParam0, &Global_87437, 0, -1) != 0)
	{
		return;
	}
	unk_0x1BC1F8869EF73402(sParam0, iParam1, iParam2, iParam3, iParam4, Global_84544);
	StringCopy(&Global_87437, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34875)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (unk_0x1B54267BB477DB52() || unk_0x035E2C7B598704F7())
	{
		unk_0x4FB114C3BF95C988(StackVal, 0, 0, 0);
	}
	else if (unk_0x523427CCABD5EC9C() || unk_0x7F11C755C90EFEC5())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xD83B94EF2700CAF3(0, &cVar0);
	}
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_11(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x9E9AFDBF482248F6(&Global_87437))
	{
		unk_0x1BC1F8869EF73402(&Global_87437, 0, 0, 0, 1, 0);
		StringCopy(&Global_87437, "", 64);
	}
	StringCopy(&Global_87437, sParam0, 64);
	unk_0x89B58891F5842134(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

char* func_18(int iParam0)
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

void func_19(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1B54267BB477DB52() || unk_0x035E2C7B598704F7())
	{
		uVar0 = iParam0;
		unk_0x4FB114C3BF95C988(8, &uVar0, 1, 1);
	}
	else if (unk_0x523427CCABD5EC9C() || unk_0x7F11C755C90EFEC5())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xD83B94EF2700CAF3(8, &cVar1);
	}
}

void func_20(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_23(uParam0);
	}
	else
	{
		func_21(uParam0);
	}
}

void func_21(var uParam0)
{
	func_22(uParam0, 0f);
}

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_23(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_21(uParam0);
	}
}

int func_24()
{
	int iVar0;
	
	Global_97358.f_17221 = iLocal_121;
	switch (iLocal_121)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_52, &Local_122, 170, iLocal_96);
	unk_0x45C517E671FFDD0E(&Local_52);
	return iVar0;
}

void func_25(bool bParam0)
{
	var uVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	bool bVar16;
	
	Var12 = { func_66(iLocal_121) };
	Var12 = { func_65(unk_0xD0FFB162F40A139C(Var12.f_2), unk_0x0BADBFA3B172435F(Var12.f_2), unk_0x492AF13A70BB3621(Var12.f_0)) };
	unk_0x97AB8B9CB42C5147(func_64(iLocal_121), Var12, 5000f, 0);
	unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 256);
	unk_0xC48BE7195D873776(0);
	unk_0xB3B57AEE7B7BA0E2(0);
	func_62(1);
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_unarmed"), 1);
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
		if (unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) > 0.3f)
		{
			unk_0xD19636383159AC07(unk_0x9F92518438215DD0(), -1);
			while (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
				{
					unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
				}
			}
		}
		if (unk_0x746960881FB19A89(iLocal_296))
		{
			Var6 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) - unk_0x77009B1C011405A9(iLocal_296, 0) };
			Var6.f_2 = 0f;
			fVar15 = unk_0x652D2EEEF1D3E62C(Var6);
			unk_0xF87DA7F5BA8C7D0F(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { unk_0x77009B1C011405A9(iLocal_296, 0) + Var6 };
				if (iLocal_121 == 12)
				{
					unk_0x27DF0A5AA993D7B6(0, Var9, 1f, 20000, 1048576000, 0, func_61(Var9, unk_0x77009B1C011405A9(iLocal_296, 0)));
				}
				else
				{
					unk_0xB64A0ADA3D251EDE(0, Var9, 1f, -1, func_61(Var9, unk_0x77009B1C011405A9(iLocal_296, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				unk_0x70A8B8D6374F080F(0, func_61(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iLocal_296, 0)), 0);
			}
			unk_0x7CF15DD8B3815A0D(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x3179CCC77CBAB31F(uVar3);
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
				unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
				unk_0xC7EBE3C9AC83FAAA(unk_0x9F92518438215DD0(), uVar3);
			}
			unk_0xCD02E3C29B8253A6(&uVar3);
			func_62(1);
		}
	}
	func_23(&uLocal_292);
	while ((func_10(&uLocal_292) < 6f && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0())) && !unk_0x3C17D9ED0E5F3FCA(unk_0x9F92518438215DD0(), "pickup_object", "pickup_low", 3))
	{
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && unk_0x3C17D9ED0E5F3FCA(unk_0x9F92518438215DD0(), "pickup_object", "pickup_low", 3))
	{
		unk_0x32C245E0760F73B7(unk_0x9F92518438215DD0(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_10(&uLocal_292) < 6f && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0())) && unk_0xD17241758B91AAED(unk_0x9F92518438215DD0(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
		if (!bVar16 && unk_0x3C17D9ED0E5F3FCA(unk_0x9F92518438215DD0(), "pickup_object", "pickup_low", 3))
		{
			unk_0x32C245E0760F73B7(unk_0x9F92518438215DD0(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (!bVar16 && unk_0x3C17D9ED0E5F3FCA(unk_0x9F92518438215DD0(), "pickup_object", "pickup_low", 3))
		{
			unk_0x32C245E0760F73B7(unk_0x9F92518438215DD0(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
	}
	func_9(&uLocal_292);
	func_40();
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (func_35() == 0)
		{
			unk_0xB27BF64B02C0107E(unk_0x9F92518438215DD0(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0xB27BF64B02C0107E(unk_0x9F92518438215DD0(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0xB27BF64B02C0107E(unk_0x9F92518438215DD0(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_121)) && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
			unk_0x27DF0A5AA993D7B6(unk_0x9F92518438215DD0(), func_34(iLocal_121), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0x746960881FB19A89(iLocal_296))
		{
			unk_0x83A49C880CB75451(&iLocal_296);
		}
		uVar4 = unk_0x0ED114FA9F0CF64D(26379945, func_32(iLocal_121), func_31(iLocal_121), func_30(iLocal_121), 1, 2);
		uVar5 = unk_0x0ED114FA9F0CF64D(26379945, func_29(iLocal_121), func_28(iLocal_121), func_27(iLocal_121), 0, 2);
		unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
		unk_0xD6B76F1AAA0869C2("HAND_SHAKE", 0.2f);
		func_23(&uVar0);
		while (func_10(&uVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA789EBE28A200809(uVar5, uVar4, func_26(iLocal_121), 1, 1);
		func_21(&uVar0);
		while (func_10(&uVar0) < ((unk_0xBBDA792448DB5A89(func_26(iLocal_121)) / 1000f) + 0.3f))
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_122.f_2 = iLocal_296;
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 177, 1);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	func_36();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_39(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_38(unk_0x9F92518438215DD0());
			if (func_37(iVar0) && (!func_110(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_37(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	var uVar8;
	
	if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		return;
	}
	unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 0);
	if (unk_0x746960881FB19A89(iLocal_296))
	{
		unk_0x83A49C880CB75451(&iLocal_296);
	}
	func_48(0, 0, 1);
	iLocal_296 = unk_0xA668F769BFDCA0AD(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
	unk_0x8F856D0103CF1B91(iLocal_296, func_46(iLocal_121), 2, 1);
	func_41(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = unk_0x8E83718430E22797(Var0, Var4, 2);
	unk_0xB3ABC7B97480C0A5(iLocal_296, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
		unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x86F4B3D6FF8F65DE(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = unk_0x9DC0C451516E13AF("DEFAULT_ANIMATED_CAMERA", 0);
	unk_0x7293A816EC05CF5F(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0x45826D2663F7FD9C(uVar8, 1);
	unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
	while (unk_0xF9F2ADAEAB471E70(uVar7) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
}

void func_41(var uParam0, var uParam1)
{
	*uParam0 = { func_45(iLocal_121) };
	switch (iLocal_121)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_61(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_61(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_61(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_61(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)
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

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	unk_0xC70D4A06E38B2711(unk_0x2563F6EECD8726D3(), 0, iParam0);
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0x35875163F311FBEF(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 15f);
	}
	unk_0x0B1544BD89031D70(iParam1);
	func_59(0);
	func_50(1, 1, iParam2, 0);
	unk_0xB3B57AEE7B7BA0E2(0);
	unk_0xC48BE7195D873776(0);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_24688, iParam0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_24688, iParam0);
	}
}

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_58(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_57())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_56(1, iParam3, uParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_58(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_56(0, iParam3, uParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_51(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_51(int iParam0)
{
	if (func_53(iParam0, 0))
	{
		return 1;
	}
	if (func_52())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_53(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_54(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_55()
{
	return Global_1312737;
}

int func_56(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_57()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

void func_59(int iParam0)
{
	if (Global_14551)
	{
		func_60(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_57())
	{
		Global_14393.f_1 = 3;
	}
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

float func_61(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x4F034F83AF91EC27((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		func_63();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_89(0))
		{
			func_59(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_63()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

Vector3 func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_65(struct<3> Param0)
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

Vector3 func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35760[iVar0 /*5*/];
		func_70(1, iVar1, 1);
		return;
	}
	iVar2 = func_69(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_68(iVar2);
}

void func_68(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35734[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35734[iParam0 /*5*/].f_1 == unk_0x9F92518438215DD0())
		{
			Global_35955 = 0;
		}
	}
	Global_35734[iParam0 /*5*/] = 13;
	Global_35734[iParam0 /*5*/].f_1 = 0;
	Global_35734[iParam0 /*5*/].f_2 = 0;
	Global_35734[iParam0 /*5*/].f_3 = 0;
	Global_35734[iParam0 /*5*/].f_4 = 0;
	Global_35733 = (Global_35733 - 1);
	if (Global_35733 < 0)
	{
		Global_35733 = 0;
	}
}

int func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35734[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	func_71(iParam0, iParam1, iParam2, 0, 0);
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_73(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_72();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35841[iVar0 /*5*/] = iParam0;
	Global_35841[iVar0 /*5*/].f_1 = iParam1;
	Global_35841[iVar0 /*5*/].f_2 = iParam2;
	Global_35841[iVar0 /*5*/].f_3 = iParam3;
	Global_35841[iVar0 /*5*/].f_4 = iParam4;
}

int func_72()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35841[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	if (func_74(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35841[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35841[iVar0 /*5*/])
			{
				if (iParam1 == Global_35841[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(int iParam0)
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
		if (!Global_35760[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_76()
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 25);
	unk_0xEDB9A377CD8B7F03(&Global_2264, 11);
}

int func_77(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_79(0))
		{
			return 0;
		}
		Global_34877++;
		*iParam0 = Global_34877;
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *iParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_126(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*iParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_78(iParam0, iParam4);
		}
	}
	return 2;
}

void func_78(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_79(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_126(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_80()
{
	switch (iLocal_121)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_81();
			break;
		
		default:
			break;
	}
}

void func_81()
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0x228A016F863DED95();
	if (unk_0x746960881FB19A89(uVar0))
	{
		Local_122.f_1 = iVar0;
	}
	if (unk_0x746960881FB19A89(iLocal_296))
	{
		Var1 = { unk_0x77009B1C011405A9(iLocal_296, 1) };
		if (unk_0xB7A628320EFF8E47(Var1, Local_89) > 25f)
		{
			func_82(0);
		}
	}
}

void func_82(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_105 = iParam0;
	iLocal_103 = 0;
	iLocal_94 = 7;
}

int func_83(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_84(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x378E80A2B7D7C8DF(unk_0x2563F6EECD8726D3()))
	{
		return 0;
	}
	if (func_89(0))
	{
		return 0;
	}
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
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
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_85(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_84(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_86(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x7B47A371E2D93C2C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		if (!*iParam0 == -1)
		{
			func_85(iParam0);
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
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = unk_0x81ACA1EEF1E4410D();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!unk_0x9E9AFDBF482248F6(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_87(var uParam0)
{
	return 1;
}

var func_88()
{
	return Global_67058;
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
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
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

bool func_91()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

int func_92()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

void func_94(var uParam0, int iParam1)
{
	func_95(uParam0, iParam1);
}

void func_95(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_96()
{
	return 1;
}

bool func_97()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		return 0;
	}
	unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar0, 1);
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
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		return ((((bVar1 && unk_0x859C6F0CEF1CB9FE(0, 69)) || (bVar1 && unk_0x859C6F0CEF1CB9FE(0, 70))) || (bVar1 && unk_0x859C6F0CEF1CB9FE(0, 68))) || unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()));
	}
	return (((((bVar1 && unk_0x859C6F0CEF1CB9FE(0, 24)) || (bVar1 && unk_0x859C6F0CEF1CB9FE(0, 25))) || (bVar1 && unk_0x859C6F0CEF1CB9FE(0, 47))) || unk_0xE26B583A59F5F9DC(unk_0x9F92518438215DD0())) || unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()));
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_105()) || Global_96405) || Global_24446) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_105()) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_105()) || Global_96405) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_105()) || Global_96405) || Global_24446) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_105()) || Global_24446) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_105()) || func_102()) || Global_96405) || Global_24446) || func_104()) || Global_35957) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_105()) || Global_96405) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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
	return Global_90001.f_1;
}

int func_100()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_101()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return Global_90014.f_291 > 0;
}

bool func_103()
{
	return Global_90014.f_290 > 0;
}

var func_104()
{
	return Global_1315900;
}

int func_105()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_106()
{
	if (unk_0x7B47A371E2D93C2C(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()
{
	return Global_86199;
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
			if (func_126(5))
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
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return unk_0x2E6E8D325977B3EC(Global_24748[iVar0 /*23*/].f_19);
}

bool func_110(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_112()
{
	struct<3> Var0;
	
	if (bLocal_295)
	{
		switch (iLocal_121)
		{
			case 4:
			case 5:
			case 8:
				iLocal_296 = unk_0xA668F769BFDCA0AD(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
				unk_0x8F856D0103CF1B91(iLocal_296, func_46(iLocal_121), 2, 1);
				unk_0xD9B13F0A69759C12(iLocal_296, 1);
				break;
			
			case 6:
			case 12:
				iLocal_296 = unk_0xA668F769BFDCA0AD(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
				unk_0x8F856D0103CF1B91(iLocal_296, func_46(iLocal_121), 2, 1);
				unk_0x4CE45F7119247C17(iLocal_296);
				Var0 = { func_114(iLocal_121) };
				if (!func_33(Var0))
				{
					uLocal_297 = unk_0xB0694AD0A3BB8936(joaat("bati"), Var0, func_113(iLocal_121), 1, 1);
					uLocal_297 = uLocal_297;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_113(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_114(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_115()
{
	switch (iLocal_121)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0x3DA2EED4204CE591("pickup_object") && unk_0x3DA2EED4204CE591("oddjobs@basejump@ig_15")) && func_116(&uLocal_117)) && func_116(&uLocal_119));
			break;
		
		case 12:
			return ((unk_0x3DA2EED4204CE591("pickup_object") && unk_0x3DA2EED4204CE591("oddjobs@basejump@ig_15")) && func_116(&uLocal_117));
			break;
		
		default:
			break;
	}
	return (func_116(&uLocal_117) && func_116(&uLocal_119));
}

int func_116(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x149162179DBAEDB0((*uParam0)[iVar0]))
			{
				if (!unk_0x149162179DBAEDB0((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_117()
{
	switch (iLocal_121)
	{
		case 5:
		case 8:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			unk_0xDA293E5084610B09("pickup_object");
			unk_0xDA293E5084610B09("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			func_119(&uLocal_119, joaat("bati"));
			unk_0xDA293E5084610B09("pickup_object");
			unk_0xDA293E5084610B09("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			unk_0xDA293E5084610B09("pickup_object");
			unk_0xDA293E5084610B09("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_118(&uLocal_117);
	func_118(&uLocal_119);
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x3BC6D217451D6BB7((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_119(var uParam0, int iParam1)
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
	iVar1 = func_120(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_120(var uParam0)
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

void func_121(int iParam0)
{
	iLocal_94 = iParam0;
}

void func_122(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 18);
		if (Global_24745 == 1)
		{
			Global_24746 = 1;
		}
		Global_24745 = 1;
	}
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 15);
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x2E6E8D325977B3EC(Global_24748[iVar0 /*23*/].f_19))
		{
			unk_0x5DC6B0185B12682A(1);
			unk_0x0451B5D93A4BDAA0(&(Global_24748[iVar0 /*23*/].f_19));
			unk_0x5DC6B0185B12682A(0);
		}
	}
}

int func_123()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xC981EEB259E36845() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_125(int iParam0, int iParam1)
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
	bVar0 = unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iParam0], iParam1);
	return bVar0;
}

bool func_126(int iParam0)
{
	return func_127(iParam0, Global_34913);
}

int func_127(int iParam0, int iParam1)
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

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_129()
{
	if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		func_94(&uLocal_93, 8388608);
		return;
	}
	StringCopy(&Local_52, "bj", 64);
	iLocal_121 = func_133(Local_89, 0);
	switch (iLocal_121)
	{
		case 4:
			iLocal_104 = 128;
			break;
		
		case 5:
			iLocal_104 = 129;
			break;
		
		case 6:
			iLocal_104 = 130;
			break;
		
		case 8:
			iLocal_104 = 132;
			break;
		
		case 12:
			iLocal_104 = 136;
			break;
		
		default:
			break;
	}
	if (iLocal_104 == 128)
	{
		if (func_132(19))
		{
			func_131(iLocal_104);
		}
	}
	func_94(&uLocal_93, 4194304);
	iLocal_98 = 0;
	fLocal_101 = (unk_0xBBDA792448DB5A89(func_130(iLocal_104)) + 5f);
	fLocal_116 = 1.1f;
	sLocal_100 = "PLAY_BASEJUMP_G";
	if (iLocal_104 != 262)
	{
		if (!func_125(0, iLocal_98))
		{
			bLocal_295 = false;
			func_131(iLocal_104);
		}
		else
		{
			bLocal_295 = true;
		}
	}
	else
	{
		bLocal_295 = false;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("bj")) > 0)
	{
		func_94(&uLocal_93, 8);
	}
	else
	{
		func_135(&uLocal_93, 8);
	}
	if (func_110(12))
	{
		func_94(&uLocal_93, 8);
	}
	iLocal_96 = 17000;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 90:
		case 91:
		case 109:
		case 110:
			return 20;
			break;
		
		case 65:
		case 66:
		case 75:
		case 106:
		case 107:
		case 108:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 128:
		case 129:
		case 130:
		case 132:
		case 136:
			return 100;
			break;
		
		case 124:
		case 125:
		case 126:
		case 127:
		case 131:
		case 133:
		case 134:
		case 135:
		case 67:
		case 68:
		case 94:
		case 69:
		case 70:
		case 72:
		case 73:
		case 74:
		case 71:
			return 209;
			break;
	}
	return -1;
}

void func_131(int iParam0)
{
	if (iLocal_94 < 5)
	{
		if (iParam0 != 262)
		{
			if (iParam0 < 0 || iParam0 >= 262)
			{
			}
			func_122(iParam0, 0, 0);
		}
		iLocal_104 = 262;
		func_85(&iLocal_95);
		iLocal_94 = 9;
	}
}

bool func_132(int iParam0)
{
	return Global_96445[iParam0 /*10*/].f_1;
}

int func_133(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_134(iVar3))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_135(var uParam0, int iParam1)
{
	func_136(uParam0, iParam1);
}

void func_136(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_104 != 262)
		{
			func_122(iLocal_104, 0, 0);
		}
	}
	func_85(&iLocal_95);
	if (func_128(uLocal_93, 2))
	{
		func_5();
		func_135(&uLocal_93, 2);
		func_7(&iLocal_97);
	}
	iLocal_97 = -1;
	func_138();
	unk_0xE60DEFFB2A853900();
}

void func_138()
{
	func_135(&uLocal_93, 4);
	func_139();
	if (unk_0x4E8A0A2FF31F0831(uLocal_51))
	{
		unk_0x28BA64A2228C7D1F(uLocal_51, 3);
	}
	if (!unk_0x471A7F8C908126F0(&Local_68))
	{
		if (unk_0x8D18B4E23D256BEF(&Local_68) != 0)
		{
			unk_0x45C517E671FFDD0E(&Local_68);
		}
	}
}

void func_139()
{
}

