/**
 *  @dev minakokojima, yukiexe
 *  @copyright Andoromeda
 */
#pragma once
#include <eosiolib/eosio.hpp>
#include <eosiolib/asset.hpp>
#include <eosiolib/singleton.hpp>
#include <eosiolib/transaction.hpp>
 
#define TOKEN_CONTRACT N(dacincubator)
#define TOKEN_SYMBOL S(4, PLT)

typedef double real_type;

using std::string;
using eosio::symbol_code;
using eosio::asset;
using eosio::extended_asset;
using eosio::symbol_code;
using eosio::permission_level;
using eosio::action;

namespace NFT {
    
    void create(account_name from) {
    }

    void transfer(account_name from, account_name to) {
    }

    void buy(account_name from) {
        
    }

    struct token {
        uint64_t     id;
        account_name owner = 0;
        uint64_t primary_key()const { return id; }
    };    

    struct tradeable_token : public token {
        uint64_t price;        
    };
};